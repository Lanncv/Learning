#include<ctype.h>
/*atof函数：把s字符串转换为相应的双精度浮点数*/

double atof(char s[]){
    double val,power;
    int i, sign ;

    for(i=0;isspace(s[i]);i++)
        ;         /*跳过空白符*/
    sign=(s[i]== '-') ? -1 : 1;
    if(s[i]== '+'|| s[i] == '-')
        i++;
    for(val=0.0;isdigit(s[i]);i++)  /*双精度必须用0.0来赋值*/
        val=10.0 *val+(s[i]-'0');
    for(power=0; isdigit(s[i]);i++){
        val = 10.0 * val +(s[i] - '0');
        power *=10.0;
    }
    return sign*val/power;
}