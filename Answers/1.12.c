#include<stdio.h>
#define OUT 0
#define IN  1

int main(){
    int c,nl,nw,nc,state,lastc;
    state=OUT;
    c=nl=nw=nc=0;
    while((c=getchar())!=EOF){ 
        ++nc;       
        if(c==' '||c=='\n'||c=='\t')
                state=OUT;
        else {            
            if(state==OUT){
                putchar('\n');
                ++nw;
                }
            state=IN;
            putchar(c);
            }                                           

    }
    printf("Number of words: %d\n", nw);
    printf("Number of char: %d\n",nc);
}
/*I am the king of Odessy*/