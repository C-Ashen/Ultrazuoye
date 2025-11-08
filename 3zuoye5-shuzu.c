//202510302108
//3262478235@qq.com
//崔嘉燊
#include <stdio.h>


int arithmetic_series_sum(int a1, int an, int step) {
    
    int n = (an - a1) / step + 1;
   
    return n * (a1 + an) / 2;
}

int main() {
   
    int result = arithmetic_series_sum(1, 100, 1);
    printf("%d\n", result);
    return 0;
}
