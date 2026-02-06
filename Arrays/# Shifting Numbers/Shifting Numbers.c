#include <stdio.h>
#include <stdlib.h>

// Shift the numbers in an array to the left by one position.

int main(){

    int n, i, shift;

    printf("# Enter how many numbers do you will fill : ");
    scanf("%d", &n);

    int Tab[n];

    for(i = 0 ; i < n ; i++){

        printf("=> Tab[%d] : ", i);
        scanf("%d", &Tab[i]);

    }

    shift = Tab[0];

    for(i = 0 ; i < n-1 ; i++){

        Tab[i] = Tab[i+1];

    }

    Tab[n-1] = shift;

    for(i = 0 ; i < n ; i++){
        
        printf("%d ", Tab[i]);
    }


    system("pause");
    return 0;

}