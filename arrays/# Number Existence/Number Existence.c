#include <stdio.h>
#include <stdlib.h>

// Check if a number exists in an array and print its index.

int main()
{

    int i, Table[10], x;
    
    printf("# Input 10 numbers into the table: \n");

    for(i = 0 ; i <= 9 ; i++){
        printf("- Table [%d] : ", i);
        scanf("%d", &Table[i]);
    }

    printf("# Input a number to search : ");
    scanf("%d", &x);

    for (i = 0; i <= 9 ; i++){
        if (Table[i] == x) {
            printf("=> Index(%d): %d\n",i, Table[i]);
            break;
        } else if (i == 9){
            printf("=> Not Found.\n");
        }
    }

    system("pause");
    return 0;
}
