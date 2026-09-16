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
/*多个if else语句中，将执行最初的真语句，如果有嵌套if，那么为避免错误，我们使用花括号,否则else会配对其上层的if*/
/*例*/
/*if((c=getchar())!=EOF){
    if(c!='a')
        putchar(c);
    }
  else......    */
