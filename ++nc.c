#include<stdio.h>

int main(){
    double nc;
    nc=0;
    int nl;nl=0;
    int c;
    while((c=getchar())!=EOF){
    ++nc;
    if(c=='\n')  
    ++nl;

    }
    printf("nc=%.0f\n",nc);
    printf("nl=%d\n",nl);
}