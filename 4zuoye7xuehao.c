//202510302108
//3262478235@qq.com
//崔嘉燊
#include <stdio.h>
#include <stdlib.h>

void question7() {
    printf("=== 第七题 ===\n");
    int arr[10];
    printf("输入：");
    
    for(int i = 0; i < 10; i++) {
        scanf("%1d", &arr[i]);
    }
    
  
    int *p = arr;
    for(int i = 0; i < 9; i++) {
        for(int j = 0; j < 9 - i; j++) {
            if(*(p + j) > *(p + j + 1)) {
                
                int temp = *(p + j);
                *(p + j) = *(p + j + 1);
                *(p + j + 1) = temp;
            }
        }
    }
    
    printf("输出：");
    for(int i = 0; i < 10; i++) {
        printf("%d", arr[i]);
    }
    printf("\n\n");
    return 0 ;
}
