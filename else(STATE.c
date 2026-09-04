#include<stdio.h>
#define OUT 0
#define IN  1

int main(){
    int c,nl,nw,nc,state;
    nc=nl=nw=0;
    state=OUT;
    while((c=getchar())!=EOF){
        ++nc;
        if(c=='\n'||c=='\t'||c==' ')
            state=OUT;
        else if(state==OUT){
            state=IN;
            ++nw;}
        }
    printf("Number of words: %d\n", nw);
    printf("\nNumber of lines: %d\n", nl);
    }