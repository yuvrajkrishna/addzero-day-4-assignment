#include<stdio.h>
int main (){
    int n = 100;
    while (n > 0){
        if(n % 3 == 0 && n % 5 == 0){
            printf("%d\n",n);
        }

        n--;
    }
    return 0 ;
}