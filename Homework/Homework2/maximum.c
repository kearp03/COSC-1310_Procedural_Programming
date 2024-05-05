#include "stdio.h"

double max (double, double);

int main(void){
    int n;
    double num, maximum;
    printf("How many numbers do you want to input: ");
    scanf("%d", &n);

    printf("Enter number 1: ");
    scanf("%lf", &num);
    maximum = num;

    for(int i = 2; i <= n; i++){
        printf("Enter number %d: ", i);
        scanf("%lf", &num);
        maximum = max(num, maximum);
    }

    printf("the maximum is: %lf\n", maximum);
}

double max (double a, double b){
    if(a > b) return a;
    else return b;
}
