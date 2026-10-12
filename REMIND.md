
1. whenever the function"getchar"is called,he getchar a char!  
2. void no return!  
3. “=" and "==“！！  
4. There is no doubt in "int c",because of the permission to allowing EOF exisited.
5. int 32bit,
6. 常见的**UB** 有哪些？

    数组越界（int arr[5]; arr[10] = 1;）

    有符号整数溢出（int x = 2147483647; x = x + 1;）

    移位量大于等于类型的位数（x << 32 或者 x << -1，这就是你刚才踩到的雷）

    空指针解引用（int *p = NULL; *p = 5;）
7. **防御性编程**
8. 边界测试思维，简单说就是：永远不要假设用户（或者你自己）会乖乖输入“正常”的数据。
9. when s[] appear as a arguments of function ,the truth is that it decay into a pointer.
10. char s[100],中的100是数组大小,即从0~99号房间
11. type=getch(s)!=EOF, Error: type only could be '1' or '0'.
12. double op2, op2=='0.0'
13. const具有传染性
14. char *p=“hello”，hello存在于**只读(.rodata)**,若修改会导致segmentation fault,若要修改则需移动至stack.且一般在such pointer adding "const" to avoid error,which let gcc forbid you in compiling.
15. **Dangling Pointer**  The stack will be distoryed in return sentence,if you return a pointer which point a stack,it will return UB,but the compiler often optimizes it to (NULL).
16. .C file will be compiled by c++ compiler.
17. No, c='1'||'2',because the priority of '=' is higher than '||'.