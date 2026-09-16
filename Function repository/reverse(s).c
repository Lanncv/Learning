#include<stdio.h>
void reverse(char *s){
    int c;
    int i;
    int j;
    int temp;/*中继器*/
    for(i=0;s[i]!='\0';i++);
    for(j=0;j<i/2;++j){
        temp=s[j];
        s[j]=s[i-1-j];
        s[i-1-j]=temp;
    }

}
