#include <stdio.h>
#include <stdlib.h>

int main(){


    int n, TAB[n], i, sum = 0;

    printf("# Enter The Number : ");
    scanf("%d", &n);
    
    for (i = 0 ; i <= n-1 ; i++){
        printf("=> TAB [%d] : ", i);
        scanf("%d", &TAB[i]);

        sum += TAB[i];

    }



    printf("# Sum Of Real Numbers is : %d\n", sum);

    system("pause");
    return 0;

}