#include<stdio.h>
#define UPPER 300/*符号常量无需声明*/
int main(){
/*for语句，先初始化第一个参数，若满足第二参数，则先后循环执行循环体（printf和第三参数*/
    int fahr;
    for(fahr=0;fahr<=UPPER;fahr=fahr+20){
        printf("%3d\t%3.1f\n",fahr,(5.0/9.0)*(fahr-32));
    }
}