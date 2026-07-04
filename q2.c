#include<stdio.h>

int main()

{
    int n = 4435676;
    int even = 0 ;
    int odd = 0 ;
    while(n > 0){
        int lastdigit = n % 10;
        if(lastdigit % 2 == 0){
            even++;
        }
        else{
            odd++;
        }
        n /= 10;
    }

    printf("Even : %d \n",even);
    printf("Odd : %d \n",odd);
    

    return 0;
}