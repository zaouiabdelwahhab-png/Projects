#include <stdio.h>
#include <stdlib.h>

// Program to print all couples (x, y) where 0 <= x <= X and 0 <= y <= Y : A couple (x, y) is a pair of integers. The program takes two integers X and Y as input and prints all possible couples (x, y) such that x ranges from 0 to X and y ranges from 0 to Y.


int main (){

    int x, y, i, j;

    printf("# Enter x & y :");
    scanf("%d %d", &x, &y);

    for (i = 0 ; i <= x ; i++){
        for (j = 0 ; j <= y ; j++){

            printf("(%d, %d)", i, j);
        
    }
        
    }

    system("pause");
    return 0;

}