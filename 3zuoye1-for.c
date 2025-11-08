//202510302108
//3262478235@qq.com
//崔嘉燊
#include <stdio.h>

int main() {
    char matrix[3][3];
    
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            scanf("%c", &matrix[i][j]);
        }
        getchar(); 
    }
    

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%c", matrix[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}


