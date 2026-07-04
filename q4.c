#include<stdio.h>

int main() {

    int n = 634787;
    int max = 0;

    while (n > 0) {
        int digit = n % 10;

        if (digit > max) {
            max = digit;
        }

        n /= 10;
    }

    printf("%d is the largest digit", max);

    return 0;
}