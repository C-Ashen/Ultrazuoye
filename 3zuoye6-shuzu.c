//202510302108
//3262478235@qq.com
//崔嘉燊
#include <stdio.h>


int array_sum(int *arr, int length) {
    int sum = 0;
    for (int i = 0; i < length; i++) {
        sum += arr[i];
    }
    return sum;
}


int array_product(int *arr, int length) {
    int product = 1;
    for (int i = 0; i < length; i++) {
        product *= arr[i];
    }
    return product;
}

int main() {
    int arr[5];
    
 
    for (int i = 0; i < 5; i++) {
        scanf("%1d", &arr[i]);
    }

    int sum = array_sum(arr, 5);
    int product = array_product(arr, 5);
    

    printf("%d\n", sum);
    printf("%d\n", product);
    
    return 0;
}
