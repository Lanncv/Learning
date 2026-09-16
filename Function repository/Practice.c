#include<stdio.h>
int main(){
    int c;
    if((c=getchar())!='v'){
        if(c!='a')
            putchar(c);
    }
    else printf("YES,IT IS.");
    return 0;
}