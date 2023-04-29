#include <stdio.h>

int main() {
    int sum = 0;
    int dig;
    
    for (int i = 1000; i <= 9998; i += 2) {
        sum += i;
    }
    
    while (sum > 9) {
        dig = 0;
        while (sum > 0) {
            dig += sum % 10;
            sum /= 10;
        }
        sum = dig;
    }
    
    if (sum % 2 == 0) {
        printf("Even found\n");
    } else {
        printf("Odd found\n");
    }
    
    return 0;
}
