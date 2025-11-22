//202510302108
//3262478235@qq.com
//崔嘉燊
#include <stdio.h>
#include <stdlib.h>

void shiftArray(int *ptr_arr, int len) {
   
    for(int i = len - 1; i > 0; i--) {
        *(ptr_arr + i) = *(ptr_arr + i - 1);
    }
    
    *ptr_arr = 0;
}

void question5() {
    printf("=== 第五题 ===\n");
    int arr[5];
    printf("输入：");
    
    for(int i = 0; i < 5; i++) {
        scanf("%1d", &arr[i]);
    }
    
    shiftArray(arr, 5);
    
    printf("输出：");
    for(int i = 0; i < 5; i++) {
        printf("%d", arr[i]);
    }
    printf("\n\n");
    return 0 ;
}
