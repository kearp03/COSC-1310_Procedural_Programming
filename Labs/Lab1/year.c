/* program to calculate what year someone will turn a specific age*/

//adds the standard input-output file
#include <stdio.h>
//sets TARGET_AGE to 88
#define TARGET_AGE 88

//defines the variables year1 and year2 as integers
int year1, year2;

//defines the method calcYear as inputing an int value and returning an int value
int calcYear (int year1);

//defines the main method
int main(void){

    //Ask the user for the birth year
    //prints the following two statements to the screen
    printf("What year was the subject born? ");
    printf("Enter as a 4-digit year (YYYY): ");
    //reads the number from the keyboard and stores it in year1
    scanf("%d", &year1);

    //Calculate the future year and store it in year2
    year2 = calcYear(year1);

    //prints the result of the calcYear function
    printf("Someone born in %d will be %d in %d.\n", year1, TARGET_AGE, year2);

    //ends program
    return 0;
}

/*The function to get the future year */
int calcYear(int year1) {
        //returns the year that is the result of the birth year + the target age(88)
        return(year1+TARGET_AGE);
}
