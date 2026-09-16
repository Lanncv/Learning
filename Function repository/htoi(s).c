#include<stdio.h>
int htoi(char *s){
    int i=0;
    int digit=0;
    int result=0;
    if(s[i]='0'){
        ++i;
        if(s[i]=='x'||s[i]=='X')
        i=2;
        else i=0;
    }
    while(s[i]!='\0'&&'a'<=s[i]<='f'||'A'<=s[i]<='F'||'0'<=s[i]<='9'){
        if('0'<=s[i]<='9')
        digit=s[i]-'0';
        else if('a'<=s[i]<='f')
        digit=s[i]-'a'+10;
        else if('A'<=s[i]<='F')
        digit=s[i]-'A'+10;
        result=16*result+digit;
        ++i;
    
    }
    return result;
}