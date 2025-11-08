//202510302108
//3262478235@qq.com
//崔嘉燊
#include <stdio.h>


void reverse_array(int *arr, int length) {
    int start = 0;
    int end = length - 1;
    
    while (start < end) {
        
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        
        start++;
        end--;
    }
}

int main() {
    int arr[5];
    
 
    for (int i = 0; i < 5; i++) {
        scanf("%1d", &arr[i]);
    }
    

    reverse_array(arr, 5);
    
   
    for (int i = 0; i < 5; i++) {
        printf("%d", arr[i]);
    }
    printf("\n");
    
    return 0;
}
