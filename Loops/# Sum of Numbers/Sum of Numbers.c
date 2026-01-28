#include <stdio.h>
#include <stdlib.h>

// Program to calculate the sum of numbers from 1 to n : example: if n=5, sum = 1+2+3+4+5 = 15

int main(){

    int sum = 0, i, n;

    printf("# Enter a number to find the sum of numbers from 1 to n: ");
    scanf("%d", &n);
    for(i = 1; i <= n; i++){
        sum = sum + i;
    }

    printf("Sum of numbers from 1 to %d is: %d\n", n, sum);    


    system("pause");
    return 0;

}