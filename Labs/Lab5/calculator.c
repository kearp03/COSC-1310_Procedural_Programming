#include <stdio.h>
#include <stdlib.h>

int main(void){
    int iNum1, iNum2;
    double iResult = 0;
    char iChoice;

    printf("Press + to perform ADDITION\n");
    printf("Press - to perform SUBTRACTION\n");
    printf("Press * to perform MULTIPLICATION\n");
    printf("Press / to perform DIVISION\n");
    printf("Press %% to perform MODULO\n");
    printf("Press any other key to QUIT\n> ");
    scanf("%c", &iChoice);
    
    if(!(iChoice == '+' || iChoice == '-' || iChoice == '*' || iChoice == '/')) exit(0);

    printf("Num 1 > ");
    scanf("%d", &iNum1);

    printf("Num 2 > ");
    scanf("%d", &iNum2);

    if(iChoice == '+') iResult = iNum1 + iNum2;
    else if(iChoice == '-') iResult = iNum1 - iNum2;
    else if(iChoice == '*') iResult = iNum1 * iNum2;
    else if(iChoice == '/'){
        if(iNum2 != 0){
            iResult = (double)iNum1 / (double)iNum2;
        }
        else{
            printf("Unable to do opperation because of DIVIDE BY ZERO ERROR\n");
            exit(0);
        }
    }
    else if(iChoice == '%'){
        if(iNum2 != 0){
            iResult = iNum1 % iNum2;
        }
        else{
            printf("Unable to do opperation because of DIVIDE BY ZERO ERROR\n");
            exit(0);
        }
    }

    printf("Result > %f\n", iResult);
    return 0;
}