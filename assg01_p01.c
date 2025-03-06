#include <stdio.h>

void main(){
    int n;
    scanf("%d", &n);
    n = n*n;
    if (n == 0){
        return;
    }
    if (n == 1){
        printf("1");
        return;
    }
    else {
    printf("%d", n);
    while (n != 1){
        if (n%2 == 0){
            n = n/2;
            printf(" -> %d", n);
        }
        else {
            n = n*3+1;
            printf(" -> %d", n);
        }
    }
    return;
    }
}
/*n is an integer inputed. If n = 0, end. If n = 1, print 1. Else, print n^2 then if the number 
is even, divide it by 2, if odd, multiply by 3 and plus 1*/