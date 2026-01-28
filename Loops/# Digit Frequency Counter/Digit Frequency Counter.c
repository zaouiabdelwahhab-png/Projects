#include <stdio.h>
#include <stdlib.h>

// Program to count frequency of each digit in a number

int main(){

    int n, i, digit, reminder, count, fake;

    printf("# Enter The Number : ");
    scanf("%d", &n);

    

    for (i = 0 ; i <= 9 ; i++){
        count = 0;
        fake = n;
        while(fake > 0){
            reminder = fake % 10;
            fake = fake / 10;
            
            if (reminder == i){
                count = count + 1;
            }
        }

        if(count > 0){
            printf("%d : %d (times)\n", i, count);
            

        }


    }




    return 0;
}