#include<stdio.h>
int main(){
    int c;
    int nl=0,nb=0,nt=0;
    while((c=getchar())!=EOF){
        if(c=='\n')
            ++nl;
        if(c=='\t')
            ++nt;
        if(c==' ')
            ++nb;
        }
    printf("Line=%d\nTab=%d\nBlank=%d\n",nl,nt,nb);
    return 0;
}