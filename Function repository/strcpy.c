/*将指针t指向的字符串复制到指针s指向的位置，包含数组下标版本和指针版，二者等价*/
void strcpy_a(char *s,char *t){
    int i=0;

    while((s[i]=t[i])!='\0')
        i++;
}
void strcpy_p(char *s,char *t){
    while(*s++=*t++!='\0')
    ;
    
    /*后置 ++ 的值计算（取值）先发生，副作用（自增）在表达式求值结束后的某个时刻发生（通常编译器会在底层先缓存旧地址，再把指针加1）
    但一元运算符按右至左的顺序结合，即*(s++)*/
        
}
void strcpy(char *s,char *t){/*最简便版*/
    while(*s++=*t++)
    ;
}