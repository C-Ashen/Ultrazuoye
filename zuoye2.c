//202510302108
//3262478235@qq.com
//崔嘉燊
#include <stdio.h>

int main()
{   printf("请输入学生的整数成绩:");
    int score;
    scanf("%d",&score);
    if(score>=90)
        printf("A\n");
    else if(score>=80)
        printf("B\n");
    else if(score>=70)
        printf("C\n");
    else if(score>=60)
        printf("D\n");
    else
        printf("E\n");
    return 0;
}