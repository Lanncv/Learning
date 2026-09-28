#include<stdio.h>
unsigned int rightrox(unsigned int x, unsigned int n){
    if(n==0)
        return x;
    if(n>32)
        n=n % 32;
    if(n==0)
        return x;
        return (x>>n)|(x<<(32-n));
}