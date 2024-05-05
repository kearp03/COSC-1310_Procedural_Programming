#include <stdio.h>

int main(void){
    int a, b;
    int A, B;
    printf("Enter the first positive integer: ");
    scanf("%d", &a);
    printf("Enter the second positive integer: ");
    scanf("%d", &b);

    A = a;
    B = b;

    while(A != 0){
        if(A < B){
            int temp = A;
            A = B;
            B = temp;
        }
        A = A % B;
    }
    printf("gcd(%d, %d) = %d\n", a, b, B);
    return 0;
}
