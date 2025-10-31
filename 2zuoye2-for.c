#include <stdio.h>

int main() {
    int count = 0;
    
    for (int num = 100; num <= 999; num++) {
        int hundreds = num / 100;     
        int tens = (num / 10) % 10;     
        int units = num % 10;          
   
        int sum = hundreds * hundreds * hundreds + 
                  tens * tens * tens + 
                  units * units * units;
     
        if (sum == num) {
            if (count > 0) {
                printf(" ");  
            }
            printf("%d", num);
            count++;
        }
    }
    
    return 0;
}