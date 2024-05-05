#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int read_a_value(){
    int TEMP;
    printf("> ");
    scanf("%d",&TEMP);
    return TEMP;
}

bool validateRange(int min, int max){
    return min <= max;
}

void printMultiTable(int min, int max){
    for(int i = min; i <= max; i++){
        for(int j = 1; j <= 10; j++){
            printf("%d x %d = %d  ", i, j, i*j);
        }
        printf("\n");
    }
    return;
}

void printFactors(int min, int max){
    for(int i = min; i <= max; i++){
        if(i % 2 == 0){
            printf("%d: {", i);
            for(int j = 1; j <= i; j++){
                if(i % j == 0) printf("%d ", j);
            }
            printf("}\n");
        }
    }
    return;
}

void printOddEven(int num){
    if(num%2) printf("odd");
    else printf("even");
    return;
}

void printThatSatisfies(int min, int max){
    for(int i = min; i <= max; i++){
        printf("%d: ", i);
        if(i > 99 && i < 1000){
            int num = i;
            int sum = 0;
            while(num != 0){
                int digit = num%10;
                sum += (digit * digit * digit);
                num /= 10;
            }
            if(sum == i){
                printf("satisfied: holds property, number is ");
                printOddEven(i);
            }
            else{
                printf("not satisfied");
            }
        }
        else {
            printf("It's not a three digit number");
        }
        printf("\n");
    }
    return;
}

void printSumOfDigits(int min, int max){
    for(int i = min; i <= max; i++){
        int sum = 0;
        int num = i;
        while(num != 0){
            sum += (num % 10);
            num /= 10;
        }
        printf("%d - sum: %d\n", i, sum);
    }
    return;
}

int main(void){
    int min = 0, max = 1;
    while(true){
        printf("1 --> To enter the range\n");
        printf("2 --> To print multiplication table for the given range of numbers\n");
        printf("3 --> To print the factors of all even numbers in the given range\n");
        printf("4 --> To find and print all numbers in the given range that satisfies the property\n");
        printf("5 --> to print the sum of all the digits of each number in the given range\n");
        printf("6 --> To QUIT\n");

        int option;
        printf("> ");
        scanf("%d",&option);

        if(option == 1) {
            // Enter the range
            printf("Type in the minimum number (inclusive) ");
            min = read_a_value();
            printf("Type in the maximum number (inclusive) ");
            max = read_a_value();

            bool isRangeOK = validateRange(min,max);
            if(isRangeOK == false){
                printf("You dummy, why did you type in the numbers that way? Swapping them.\n");
                // Swap the numbers
                int TEMP = min;
                min = max;
                max = TEMP;
            }
        }

        else if(option == 2){
            printMultiTable(min, max);
        }

        else if(option == 3){
            printFactors(min, max);
        }

        else if(option == 4){
            printThatSatisfies(min, max);
        }

        else if(option == 5){
            printSumOfDigits(min, max);
        }

        else if (option == 6){
            // Quit
            printf("Goodbye!\n");
            break;
        }

        else{
            // Yell at the person
            printf("You dummy, pick a number between 1 and 6\n");
        }
        printf("\n");
    } //End of while loop
    return 0;
}
