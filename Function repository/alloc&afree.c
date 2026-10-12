/*简易栈式内存释放器*/



#define ALLOCSIZE 10000

static char allocbuf[ALLOCSIZE];/*alloc所使用的存储区*/
static char *allocp = allocbuf;/*栈顶指针*/

char *alloc(int n){
    if(allocbuf + ALLOCSIZE - allocp>=n){
        allocp+=n;
        return allocp-n;
    }
    else             /*存储空间不够*/
        return 0; /*0指针，永远不是有效的数据地址*/ 
}
void afree(char *p) /*释放p指向的存储区*/
{
    if(p<allocbuf||p>allocbuf+ALLOCSIZE)
        printf("ERROR,ptr is not in allocbuf");
    else
        allocp = p;
}