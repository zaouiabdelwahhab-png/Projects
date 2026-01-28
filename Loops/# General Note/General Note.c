#include <stdio.h>
#include <stdlib.h>

int main(){

    float Student_Mark, General_Note, Sum = 0;
    int i;

    for(i = 1 ; i <= 30 ; i++){
        printf("Enter Student %d Mark: ", i);
        scanf("%f", &Student_Mark);
        Sum = Sum + Student_Mark;
    }
    General_Note = Sum / 30;
    printf("General Note of the Class is: %.2f\n", General_Note);

    system("pause");
    return 0;

}