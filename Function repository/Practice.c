#include<stdio.h>
#include<math.h>
int main(){
    int money;
    float year;
    double rate;
    scanf("%d %lf %lf",&money,&year,&rate);
    double temp=1.0+rate;
    while(year>1){
        temp=temp*(1.0+rate);
        year--;
    }
    printf("interest = %.2lf",money*temp-money);
    return 0;
}