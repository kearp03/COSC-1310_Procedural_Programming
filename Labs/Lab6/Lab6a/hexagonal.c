#include <stdio.h>

//Debugged following code

void hexagonal (int); //changed return type to void

int main (void){
    int n;
    printf("Enter number of elements (> 0): ");
    scanf("%d", &n); //added &
    hexagonal(n);
    return 0; //added 0
}

void hexagonal (int n){
    int element;
    if (n <= 0){
        printf ("number of elements must be greater than 0\n");
        return;
    }
    for (int i = 1; i <= n; i++){ //changed condition to <+
        element = i * (2 * i - 1); //replaced "n" with "i"
        printf("%d ", element);
    }
    printf ("\n");
    return; //removed the n
}
