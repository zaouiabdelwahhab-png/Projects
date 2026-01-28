#include <stdio.h>
#include <stdlib.h>

// Program to calculate the factorial of a number : Exemple: 5! = 5*4*3*2*1 = 120

int main(){

    int fact = 1, n;

    printf("Enter a number to find its factorial: ");
    scanf("%d", &n);

    while(n > 0 ){
        fact = fact * n;
        n--;
    }

    /* # Using for loop :

    for(int i = n; i > 0; i--){
        fact = fact * i;
    }
    
    
    
    
    */  

    printf("Factorial is: %d\n", fact);

    system("pause");
    return 0;

}