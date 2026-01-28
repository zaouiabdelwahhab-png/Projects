#include <stdio.h>
#include <stdlib.h>

// Program to calculate Binomial Coefficient C(n, k) : The binomial coefficient C(n, k) is the number of ways to choose k elements from a set of n elements without regard to the order of selection. It is given by the formula C(n, k) = n! / (k! * (n - k)!).

int main(){

    int n, i, k;
    long long int factn = 1, factk = 1, factnk = 1, binomialCoefficient;

    printf("# Enter n & k : ");
    scanf("%d %d", &n, &k);

    for(i = 1 ; i <= n ; i++){
        factn = factn * i;
    }

    for(i = 1 ; i <= k ; i++){
        factk = factk * i;
    }

    for (i = 1 ; i <= (n - k) ; i++){
        factnk = factnk * i;
    }

    binomialCoefficient = factn / (factk * factnk);

    printf("# The binomialCoefficient : %lld\n", binomialCoefficient);

    system("pause");
    return 0;

}
    