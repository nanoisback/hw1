#include <stdio.h>
#include <math.h>

void printAdvancedFactors(long long n){
    if (n <= 1) return;

    int first = 1;
    int unique[64];     // store unique prime factorsfactors
    int prime_power[64];    // store power of each factor
    int sum = 0;
    int count = 0;
    int unique_count = 0;   // store number of unique factors

    while (n % 2 == 0) {
        n /= 2;
        count++;
        if (!first) printf(" * ");
        printf("2");
        first = 0;
    }
    if (count > 0) {
        unique[unique_count] = 2;
        prime_power[unique_count] = count;
        unique_count++;
        sum += 2;
    }

    // check and divide by odd numbers
    for (int i = 3; i <= sqrt(n); i += 2) {
        count = 0;
        while (n % i == 0) {
            n /= i;
            count++;
            if (!first) printf(" * ");
            printf("%d", i);
            first = 0;
        }
        if (count > 0) {
            unique[unique_count] = i;
            prime_power[unique_count] = count;
            unique_count++;
            sum += i;
        }
    }

    if (n > 1) {
        unique[unique_count] = n;
        prime_power[unique_count] = 1;
        unique_count++;
        if (!first) printf(" * ");
        printf("%lld", n);
        sum += n;
    }
    
    printf("\n");

    // sum of unique factors
    printf("%d\n", sum);

    // exponential representation
    for (int i = 0; i < unique_count; i++) {
        if (i != 0) printf(" * ");
        printf("%d^%d", unique[i], prime_power[i]);
    }
    printf("\n");
}


int main(){
    long long n;
    scanf("%lld", &n);
    printAdvancedFactors(n);
}