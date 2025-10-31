//202510302108
//3262478235@qq.com
//崔嘉燊
#include <stdio.h>

int main() {
    int arr[5]; 
    int sum = 0;
    
    printf("请输入4个整数：");
    for (int i = 0; i < 4; i++) {
        scanf("%d", &arr[i]);
        sum += arr[i]; 
    }
    
   
    arr[4] = sum;
    
    
    for (int i = 0; i < 5; i++) {
        printf("%d", arr[i]);
        if (i < 4) {
            printf(" "); 
        }
        
    }
    
    return 0;

}

