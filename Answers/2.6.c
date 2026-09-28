#include <stdio.h>
/*此为p为n位最高位版*/
unsigned int setbits(unsigned int x, int p, int n, unsigned int y) {
    // 1. 基础掩码：低 n 位为 1 (例如 n=3，得到 0000 0111)
    unsigned int base_mask = ~(~0 << n);
    
    // 2. 左移量：目标区域的起始位置
    int shift = p - n + 1;
    
    // 3. 把 y 最右边的 n 位移过来
    unsigned int y_part = (y & base_mask) << shift;
    
    // 4. 把 x 的目标位清零，然后填入 y_part
    return (x & ~(base_mask << shift)) | y_part;
}
int main(){

}
