//202510302108
//3262478235@qq.com
//崔嘉燊
#include <stdio.h>
#include <stdlib.h>

void question2() {
    printf("=== 第二题 ===\n");
    int arr[5];
    printf("输入：");
    
    
    for(int i = 0; i < 5; i++) {
        scanf("%1d", &arr[i]);
    }
    
    
    int *ptr = arr;
    for(int i = 0; i < 5; i++) {
        *(ptr + i) = *(ptr + i) * 2;
    }
    
    printf("输出：");
    for(int i = 0; i < 5; i++) {
        printf("%d", arr[i]);
    }
    printf("\n\n");
    return 0 ;
}

