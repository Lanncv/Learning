#include<stdio.h>
int main(){
    int c;
    double nc;
    while((c=getchar())!=EOF){
    putchar(c);
    ++nc;
    }
    printf("%.0f\n",nc);   
}