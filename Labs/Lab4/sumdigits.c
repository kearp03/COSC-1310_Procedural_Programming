#include <stdio.h>

int main(void){
    int iNumber, sum;

    printf("Enter a three digit number: ");
    scanf("%d", &iNumber);

    while (iNumber != 0){
        sum+= iNumber%10;
        iNumber = iNumber/10;
    }
    printf("The sum of the digits is: %d\n", sum);
    return 0;
}
