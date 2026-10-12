#include<stdio.h>
void expand(unsigned char s1[] , unsigned char s2[] ){
    unsigned char i,j,n,last,first;
    for(i=j=0;s1[i]!='\0';i++,j++){
        switch(s1[i]){
            case '-': 
            if(i!=0){
                first=s1[i-1];
                last=s1[i+2];
                    if(last=='\0'){
                        s2[j]='\0';
                        break;
                    }
                n=last-first;
                while(n>0){
                    first+=1;
                    s2[j]=first;
                    j++;
                    n-=1;
                }
                if(n<=0)
                    j--;
            }
            else s2[j]='-';
            break;

            default: s2[j]=s1[i];
            break;
        }
    }
    s2[j]='\0';
}

int main(){
    char s2[80];
    expand("-a-z0-9",s2);
    printf("%s\n",s2);
    return 0;
    
}
void standard_expand(char s1[], char s2[] ){
    char c;
    int i,j;

    i=j=0;
    while((c=s1[i++])!='\0')
        if(s1[i]=='-'&&s1[i+1]>=c){
            i++;
            while(c<s1[i])
                s2[j++]=c;
        }
        else s2[j++]=c;
    s2[j] = '\0';
}
/*What graceful,containing the solution of exception in achievement of common function*/