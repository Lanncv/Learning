#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>

#define MAXVAL 100
#define MAXOP 100
#define NUMBER '0'
#define BUFFSIZE 100

int getop(char []);
void push(double f);
double pop(void);
int getch(void);
void ungetch(int c);

char buf[BUFFSIZE];
int bufp=0;
int sp = 0;
double val[MAXVAL];

/*逆波兰计算器*/

int main(void){
    int type;
    double op2=0;
    double op1=0;
    char s[MAXOP];

    while((type=getop(s))!=EOF){
        int n;
        switch (type){
            case NUMBER:
                push(atof(s));
                break;
            case '+':
                push(pop() + pop());
                break;
            case '*':
                push(pop() * pop());
                break;
            case '-':
                op2=pop();
                push(pop() - op2);
                break;
            case '/':
                op2=pop();
                if(op2!=0.0)
                    push(pop() / op2);
                else
                    printf("Error:zero divisor\n");
                break;
            case '\n':
                printf("\t%.8g\n", pop() );
                break;
            case '%':
                op2=pop();
                op1=pop();
                if(op2=='0')
                    printf("error: Zero divisor");
                else if(op1>=0){
                    n=op1 / op2;
                    push (op1-op2*n);
                }
                else {
                    n=op1 / op2;/*舍弃小数位*/
                    push (op1-(n+1)*op2);
                }
                break;
            default:
                printf("error: Unknown command %s\n", s);
                break;
        }
    }
}

int getop(char s[]){
    int i,c;

    while((s[0]=c=getch())== ' '||c=='\t')
        ;
    s[1]='\0';
    if(!isdigit(c)&&c!='.'&&c!='-')
       return c;
    i=0;
    if(c=='-'){
        while(isdigit(s[++i]=c=getch()))
            ;
            if(c=='.')
                while (isdigit(s[++i]=c=getch()))
                    ;
            s[i]='\0';                  /*上式++i的施行总会使s[i]中多填入一个非数字，那么，用'\0'覆盖*/
            if(i>1){
                ungetch(c);
                return NUMBER;
            }
            else {
                ungetch(c);
                return '-';
            }
    }
    if(isdigit(c)){
        while(isdigit(s[++i]=c=getch()))
            ;
        if(c=='.'){
            while (isdigit(s[++i]=c=getch()))
                ;
        }
        if (c!=EOF)
            ungetch(c);
    }
        return NUMBER;                  /*与上面return的次序不同*/
}
int getch(void){
    return (bufp>0) ? buf[--bufp] : getchar();

}

void ungetch(int c){

    if(bufp>=BUFFSIZE)
        printf("Error: Too many characters");
    else
        buf[bufp++]=c;
}

double pop(void){
    if(sp>0)
        return val[--sp];
    else{
        printf("Error: Stack is empty");
        return 0.0;
    }   
}

void push(double f){
    if(sp<MAXVAL)
        val[sp++]=f;   
    else
        printf("Error: Stack full");
}