#include <stdio.h>

int main() {
    int records[5]; 
   
    printf("请输入4位学生学号：");
    for (int i = 0; i < 4; i++) {
        scanf("%d", &records[i]);
    }
    
    for (int i = 4; i > 0; i--) {
        records[i] = records[i - 1];
    }
    

    records[0] = 0;
    

    for (int i = 0; i < 5; i++) {
        printf("%d", records[i]);
        if (i < 4) {
            printf(" "); 
        }
       
    }
    
    return 0;
}