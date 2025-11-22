//202510302108
//3262478235@qq.com
//崔嘉燊
#include <stdio.h>
#include <stdlib.h>


void question1() {
    printf("=== 第一题 ===\n");
    int a;
    printf("输入：");
    scanf("%d", &a);
    
    int *p = &a;
    *p = *p + 10;
    
    printf("输出：%d,%d\n\n", a, *p);
    return 0 ;
}



