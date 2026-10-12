#include<stdio.h>
const char* getaddress(){
    const char p[]="I ask you , are you my master?";
    
    return p;
}

int main(void){
    printf("%p\n",(void*)getaddress());

    return 0;
}