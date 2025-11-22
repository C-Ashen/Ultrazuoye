//202510302108
//3262478235@qq.com
//崔嘉燊
#include <stdio.h>
#include <stdlib.h>

void question6() {
    printf("=== 第六题 ===\n");
    int *ptr;

    ptr = (int*)malloc(5 * sizeof(int));
    
    printf("输入：");
    for(int i = 0; i < 5; i++) {
        scanf("%1d", ptr + i);
    }
    
    printf("输出：");
    for(int i = 0; i < 5; i++) {
        printf("%d", *(ptr + i));
    }
    printf("\n\n");
    

    free(ptr);
    return 0 ;
}

