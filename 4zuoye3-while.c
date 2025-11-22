//202510302108
//3262478235@qq.com
//崔嘉燊
#include <stdio.h>
#include <stdlib.h>

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

void question3() {
    printf("=== 第三题 ===\n");
    int x, y;
    printf("输入两个整数：");
    scanf("%d %d", &x, &y);
    
    printf("交换前：x = %d, y = %d\n", x, y);
    swap(&x, &y);
    printf("交换后：x = %d, y = %d\n\n", x, y);
    return 0 ;
}

