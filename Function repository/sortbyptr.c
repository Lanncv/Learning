#include <stdio.h>
#include <string.h>

#define MAXLINES 5000

char *lineptr[MAXLINES];

int readlines(char*lineptr[],int nlines);
void writelines(char *lineptr[],int nlines);

void qsort(char *lineptr[],int left ,int ringt);

/*对输入的文本行进行排序*/

int main(){
    int nlines; /*读取的行数目*/

    if((nlines = readlines(lineptr, MAXLINES))>=0){
        qsort(lineptr, 0 ,nlines-1);
        writelines(lineptr, nlines);
        return 0;
    }else{
        printf("error: input too big to sort\n");
        return 1;

    }
}

#define MAXLEN 1000
int getline(char*,int);
char* allpc(int);
char * alloc(int n);

/*readlines函数：读取输入行  */

int readlines(char *lineptr[], int maxlines){
    int len, nlines;
    char *p, line[MAXLEN];
    nlines=0;
    while((len = getline(line, MAXLEN)) > 0)
        if(nlines>= MAXLINES || (p= alloc(len)) == NULL)
            return -1;
        else{
            line[len-1]='\0';
            strcpy(p, line);
            lineptr[nlines++]= p ;

        }
    return nlines;
    }
/*swap：交换v[i]与v[j]*/
void swap(char *v[], int i , int j ){
    char *temp;            /*因为v(lineptr)所有元素都是字符指针，所以temp也必须是字符指针*/

    temp = v[i];
    v[i] = v[j];
    v[j] = temp;
}



/*writelines函数：写输出行*/

void writelines(char *lineptr[], int nlines){
    int i;

    for (i=0; i < nlines; i++)
        printf("%s\n", lineptr[i]);
}

/*sort函数：按递增顺序对v[left].......v[right]进行排序*/


void qsort(char *v[], int left , int right){
    int i,last;
    void swap(char *v[],int i ,int j);

    if( left >= right)/*如果数组元素个数小于2,则返回*/
        return;
    swap(v,left,(left + right) / 2);
    last=left;
    for(i=left+1; i <=right; i++)
        if(strcmp(v[i],v[left])< 0 )
            swap(v, ++last,i);
    qsort(v,left,last-1);
    qsort(v,last+1,right);

}

int getline(char *s,int lim){
    int i;
    int c;
    for(i=0;(c=getchar())!=EOF&&c!='\n'&&i<lim-1;++i)
        s[i]=c;
    if(c=='\n'&&i<lim-1){
        s[i]='\n';
        ++i;
    }
    s[i]='\0';
    return i;
}

#define ALLOCSIZE 10000

static char allocbuf[ALLOCSIZE];
static char *allocp = allocbuf;

    
/*返回指向n个字符的指针*/
char *alloc(int n){
    if(allocbuf + ALLOCSIZE - allocp >= n){
        allocp +=n;
        return allocp-n;

    }
    else
        return 0;
}

void afree(char *p)/*释放p指向的存储区*/
{
    if(p>= allocbuf && p < allocbuf +  ALLOCSIZE)/*确定*p是在allocbuf中*/
        allocp=p;
}