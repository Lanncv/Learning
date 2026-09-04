#include <stdio.h>

int htoi(const char s[]) {
    int i = 0;
    int result = 0;
    int digit;

    // 跳过 0x 或 0X
    if (s[0] == '0' && (s[1] == 'x' || s[1] == 'X')) {
        i = 2;
    }

    // 遍历剩下的字符
    while (s[i] != '\0') {
        char c = s[i];

        if (c >= '0' && c <= '9') {
            digit = c - '0';
        } else if (c >= 'a' && c <= 'f') {
            digit = c - 'a' + 10;
        } else if (c >= 'A' && c <= 'F') {
            digit = c - 'A' + 10;
        } else {
            break;  // 非法字符，停止转换
        }

        result = result * 16 + digit;
        i++;
    }

    return result;
}

int main() {
    // 测试几个用例
    printf("%d\n", htoi("FF"));      // 应该输出 255
    printf("%d\n", htoi("0x1A"));    // 应该输出 26
    printf("%d\n", htoi("0X2F"));    // 应该输出 47
    printf("%d\n", htoi("12Z34"));   // 应该输出 18（读到Z就停）
    return 0;
}