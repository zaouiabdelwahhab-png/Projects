#include <stdio.h>
#include <stdlib.h>

// Program to check if a number is a Perfect Number or not : A perfect number is a positive integer that is equal to the sum of its proper positive divisors, that is, the sum of its positive divisors excluding the number itself. Example: 6 is a perfect number because 1 + 2 + 3 = 6.


int main(){

    int sum, i, n;

    printf("# Enter a Number : ");
    scanf("%d", &n);

    sum = 0;

    for(i = 1 ; i < n ; i++){
        if(n % i == 0){
            sum = sum + i;
        }
    }

    if(sum == n){
        printf("%d is a Perfect Number\n", n);
    } else {
        printf("%d is not a Perfect Number\n", n);
    }

    system("pause");
    return 0;
}