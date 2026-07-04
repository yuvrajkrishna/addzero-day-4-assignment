#include<stdio.h>

int main() {

    int n = 634787;

    int max = 0 ;
    
    while(n > 0){
        if(max < n % 10){
            max = n % 10;
        }
        n/=10;
    }
    printf("%d is largest digit", max);
    

    return 0;

}