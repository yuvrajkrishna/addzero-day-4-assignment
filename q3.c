#include<stdio.h>

int main() {
    int n = 10;
    int sum = 0;

    if (n % 2 != 0)
        n--;

    while (n > 0) {
        sum += n;
        n -= 2;
    }

    printf("The Sum of Even are : %d", sum);

    return 0;
}