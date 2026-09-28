#include<stdio.h>
void shellsort(char s[],int n){
    int i,gap,j,c;
    for(gap=n/2;gap>0;gap/=2)
        for(i=n;i<n;i++)
            for(j=i-gap;gap>0&&s[j]>s[j+gap];j-=gap){
                c=s[j];
                s[j]=s[j+gap];
                s[j+gap]=c;
            }
}