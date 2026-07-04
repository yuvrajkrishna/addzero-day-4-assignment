#include<stdio.h>

int main () {

    int n = 1214;

    int dupn = n;

    int reverse = 0;

    while(dupn > 0){

        int lastdigit = dupn % 10;

        reverse = reverse * 10 + lastdigit;

        dupn /= 10;
    }
    
   if (n == reverse) {

        printf("%d is palindrome Number",n);

   }

   else {

        printf("%d is not a palindrome Number",n);

   }

    return 0;

}