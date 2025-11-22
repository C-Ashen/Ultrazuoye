//202510302108
//3262478235@qq.com
//崔嘉燊
#include <stdio.h>
#include <stdlib.h>

void incrementArray(int *arr, int len) {
    for(int i = 0; i < len; i++) {
        (*(arr + i))++;
    }
}

void question4() {
    printf("=== 第四题 ===\n");
    int arr[5];
    printf("输入：");
    
    for(int i = 0; i < 5; i++) {
        scanf("%1d", &arr[i]);
    }
    
    incrementArray(arr, 5);
    
    printf("输出：");
    for(int i = 0; i < 5; i++) {
        printf("%d", arr[i]);
    }
    printf("\n\n");    
    return 0 ;
}
