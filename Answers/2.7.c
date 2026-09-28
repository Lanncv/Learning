#include<stdio.h>
unsigned int invert(unsigned int x,unsigned char p, unsigned char n){
    int base_mask;
    base_mask=~(~0<<n);
    x=x^(base_mask<<(p-n+1));

    return x;
}