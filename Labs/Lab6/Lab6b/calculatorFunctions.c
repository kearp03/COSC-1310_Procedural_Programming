#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

void printMenu(); //void function (with no parameters) prototype
bool checkChoice(char iChoice); //non-void function with a parameter and formal argument iChoice
int readInteger(); //non-void function with no parameters
double tackyAdd(int iNum1, int iNum2);
double tackySubtract(int iNum1, int iNum2);
double tackyMultiply(int iNum1, int iNum2);
double tackyDivide(int iNum1, int iNum2);
double tackyMod(int iNum1, int iNum2);
void printResult(double iResult); //void function with a parameter
double bigBoy(char iChoice, int iNum1, int iNum2);

void printMenu(){ //function definition
    printf("Press + to perform ADDITION\n");
	printf("Press - to perform SUBTRACTION\n");
	printf("Press * to perform MULTIPLICATION\n");
	printf("Press / to perform DIVISION\n");
	printf("Press %% to perform MODULO\n");
	printf("Press any other character to QUIT\n"); //function body
	return; //function return statement that returns nothing
}

bool checkChoice(char iChoice){
    return iChoice != '+' && iChoice != '-' && iChoice != '*' && iChoice != '/' && iChoice != '%';
}

int readInteger(){
    int num;
    printf("> ");
	scanf("%d", &num);
	return num;
}

double tackyAdd(int iNum1, int iNum2){
    return iNum1 + iNum2;
}

double tackySubtract(int iNum1, int iNum2){
    return iNum1 - iNum2;
}

double tackyMultiply(int iNum1, int iNum2){
    return iNum1 * iNum2;
}

double tackyDivide(int iNum1, int iNum2){
    return (double)iNum1 / iNum2;
}

double tackyMod(int iNum1, int iNum2){
    return iNum1 % iNum2;
}

void printResult(double iResult){
    printf("The result is %f\n", iResult);
    return;
}

double bigBoy(char iChoice, int iNum1, int iNum2){
    if (iChoice == '+') {
		// Addition
		return tackyAdd(iNum1, iNum2);
	}
	else if (iChoice == '-') {
		// Subtraction
		return tackySubtract(iNum1, iNum2);
	}
	else if (iChoice == '*') {
		// Multiplication
		return tackyMultiply(iNum1, iNum2);
	}
	else if (iChoice == '/') {
		// Division
		// Check that we aren't dividing by zero
		if (iNum2 == 0) {
			printf("Since the denominator is zero, the operation is not possible and it will lead to DIVIDE BY ZERO ERROR\n");
			// If the first number is *not* zero, then flip the operands
			if (iNum1 != 0) {
				return tackyDivide(iNum2, iNum1);
			}
			// Otherwise, we can't do anything useful with these numbers
			else {
				printf("Since both operands are zero, the operation is not possible and it will lead to DIVIDE BY ZERO ERROR\n");
				exit(0);
			}
		}
		else {
			return tackyDivide(iNum1, iNum2);
		}
	}
	else if (iChoice == '%') {
		// Modulo
		// Check that we aren't dividing by zero
		if (iNum2 == 0) {
			printf("Since the denominator is zero, the operation is not possible and it will lead to DIVIDE BY ZERO ERROR\n");
			// If the first number is *not* zero, then flip the operands
			if (iNum1 != 0) {
				return tackyMod(iNum2, iNum1);
			}
			// Otherwise, we can't do anything useful with these numbers
			else {
				printf("Since both operands are zero, the operation is not possible and it will lead to DIVIDE BY ZERO ERROR\n");
				exit(0);
			}
		}
		else {
			return tackyMod(iNum1, iNum2);
		}
	}
	return 0;
}

int main(void){
    int iNum1, iNum2;
	double iResult;
	char iChoice;

	// Print the menu
	printMenu(); //function call

	// Ask the user for their choice
	printf("> ");
	scanf("%c", &iChoice);

	// If the user wants to quit, we can do that right now and not
	// bother asking for numbers. If the user did not type in + - * / or %,
	// then they want to quit the program.
	if(checkChoice(iChoice)) { //actual argument iChoice
		// End the program early
		exit(0);
	}

	// Ask the user for the numbers
	printf("Please type in two integers.\n");
	iNum1 = readInteger();
	iNum2 = readInteger();

	iResult = bigBoy(iChoice, iNum1, iNum2);

	// Print the result
	printResult(iResult);
}
