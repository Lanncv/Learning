### 9.7  
1. whenever the function"getchar"is called,he getchar a char!  
2. void no return!  
3. “=" and "==“！！  
4. There is no doubt in "int c",because of the permission to allowing EOF exisited.
5. int 32bit,
6. 常见的 UB 有哪些？

    数组越界（int arr[5]; arr[10] = 1;）

    有符号整数溢出（int x = 2147483647; x = x + 1;）

    移位量大于等于类型的位数（x << 32 或者 x << -1，这就是你刚才踩到的雷）

    空指针解引用（int *p = NULL; *p = 5;）
7. 防御性编程
8. 边界测试思维，简单说就是：永远不要假设用户（或者你自己）会乖乖输入“正常”的数据。
9. when s[] appear as a arguments of function ,the truth is that it decay into a pointer.
10. 