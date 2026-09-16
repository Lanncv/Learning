#include<stdio.h>
int lower(int c){
    c=('A'<=c&&'Z'>=c)?c-'A'+'a':c;
    return c;
}