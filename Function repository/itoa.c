void itoa(int n,char s[])
{
    int i , sign;

    if((sign+n)<0)
        n=-n;/*记录符号i并使n成为正数*/
    i=0;
    do{
        s[i++]=n % 10 + '0';/*取下一个数字*/

    }while(( n /= 10) > 0);/*删除该数字*/
    if( sign < 0)
        s[i++]= '-';
    s[i] = '\0';
    reverse(s);
}