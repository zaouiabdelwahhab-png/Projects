#include <stdio.h>
#include <stdlib.h>

// Program to display the multiplication table of a number

int main(){

    int n, i, resulte;

    printf("# Enter a number to display its multiplication table : ");
    scanf("%d", &n);

    for (i = 1 ; i <= 10 ; i++){
        resulte = n * i;
        printf("%d x %d = %d\n", n, i, resulte);
    }

    system("pause");
    return 0;
}