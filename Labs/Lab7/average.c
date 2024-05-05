#include <stdio.h>
#include <stdlib.h>

int main(){
    int n;
    int sum;
    double avg;

    printf("> ");
    scanf("%d", &n);

    for(int i = 1; i < n; i++){
        printf("%d + ", i);
        sum += i;
    }
    printf("%d\n", n);
    sum += n;
    avg = (double)sum / n;

    printf("Sum: %d\nAverage: %lf\n", sum, avg);
    return 0;
}
