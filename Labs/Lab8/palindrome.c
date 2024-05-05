#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

int generateRandomNumber(int);
void buildArray(int[], int, int);
void buildReverse(int[], int*, int);

int main(void){
    int N;
    srand(time(NULL));

    while(1){
        printf("Type in how many numbers you want generated, or -1 to quit: ");
        scanf("%d", &N);

        if(N == -1) break;

        for(int i = 1; i <= N; i++){
            int num = generateRandomNumber(500), reverse = 0;
            int digitCount = log10(num) + 1;
            int reversed[digitCount];

            buildArray(reversed, num, digitCount);
            buildReverse(reversed, &reverse, digitCount);

            printf("%d:\tNumber: %d\n  \tReversed: %d\n  \tIs Palindrome? ", i, num, reverse);
            if(num == reverse) printf("Yes!");
            else printf("No.");
            printf("\n\n");
        }
    }
    return 0;
}

int generateRandomNumber(int limit){
    return rand() % limit;
}

void buildArray(int a[], int num, int len){
    int j = 0;
    while(num != 0){
        a[j] = num % 10;
        num /= 10;
        j++;
    }
    return;
}

void buildReverse(int a[], int* reverse, int len){
    int e = 0;
    for(int i = len-1; i >= 0; i--){
        *reverse += a[i] * pow(10, e);
        e++;
    }
    return;
}
