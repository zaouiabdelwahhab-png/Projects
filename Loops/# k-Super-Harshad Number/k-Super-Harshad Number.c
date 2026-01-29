#include <stdio.h>
#include <stdlib.h>

// Writing a programme that checks if a number is a K-Superharshed-NUmber.


int main(){

    int n, k, i, sumofdigit, temp, originalnum;

    printf("# Enter the number : ");
    scanf("%d", &n);

    printf("# Enter k : ");
    scanf("%d", &k);

    originalnum = n;

    for (i = 1 ; i <= k ; i++){

        sumofdigit = 0;
        temp = n;

        while (temp > 0){

            sumofdigit = sumofdigit + (temp % 10);
            temp = temp / 10;
        }

        if (n % sumofdigit != 0){

            printf("%d is not a %d super harshed number.\n", originalnum, k);
            return 0;
        }

        n = sumofdigit;

    }


    printf("=> %d is a %d super harshed number.\n", originalnum, k);

}

