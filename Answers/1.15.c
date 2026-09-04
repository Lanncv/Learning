#include<stdio.h>
#define MAX 10000
float FtoC(float fahr){
   float C;
   
   if(fahr<=MAX){
        C=(fahr-32)*(5.0/9.0);
        return C;
    }
    else return 0;
}
int main(){
    printf("%f",FtoC(400.0));
    return 0;

}