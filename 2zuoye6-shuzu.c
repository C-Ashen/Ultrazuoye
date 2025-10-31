#include <stdio.h>

int main() {
    int arr[5];
    int count = 0;
    
    printf("请输入5个整数（用回车分隔）：\n");
    
  
    while (count < 5) {
        int num;
        scanf("%d", &num);
        
       
        if (num % 2 == 0) {
            arr[count] = num;
            count++;
        } else {
            printf("输入的是奇数，请重新输入：\n");
        }
    }
    
 
    for (int i = 0; i < 5; i++) {
        printf("%d", arr[i]);
        if (i < 4) {
            printf(" "); 
        }
        
    }
    
    return 0;
}