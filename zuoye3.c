//202510302108
//3262478235@qq.com
//崔嘉燊
#include<stdio.h>

int main() 
{
    int a, b, d;
    char c;
    printf("请输入两个整数和一个运算符(例如3 4 +):");
    scanf("%d %d %c", &a, &b, &c);
    if(c == '+') {
        d = a + b;
    } else if(c == '-')
    {
        d = a - b;
    } else if(c == '*')
    {
        d = a * b;
    } else if(c == '/')
    {
        d = a / b;
    } else 
    {
        printf("除数不能为0\n");
        return 1;
    }
    printf("%d %c %d= %d\n", a, c, b, d);
    return 0;
}