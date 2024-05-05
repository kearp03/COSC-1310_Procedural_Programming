#include <stdio.h>
#include <stdbool.h>
#define LEN 20

//Function Prototypes
bool isNotRepeat(int, int[]);
int countRepeats(int[]);

//Main function
int main(void){
    //Declares integer array
    int arr[LEN];
    
    //Gets the elements from the user
    printf("Enter the %d elements: ", LEN);
    for(int i = 0; i < LEN; i++) scanf("%d", &arr[i]);
    
    //Prints out how many elements are 
    //repeated more than twice
    printf("Number of elements repeated more than twice: %d\n", countRepeats(arr));
    
    return 0;
}

//Function that takes in an array and returns
//how many elements are repeated more than twice
//Calls isNotRepeat function
int countRepeats(int arr[]){
    //Initializes needed countings variables and array
    int repeatIndex[LEN] = {-1};
    int indexCount = 0;
    int repeated = 0;
    
    //Loops through the first 19 elements of the array
    for(int i = 0; i < LEN - 1; i++){
        //Sets count equal to 1
        int count = 1;
        //Checks to make sure current index 
        //hasn't already been counted
        if(isNotRepeat(i, repeatIndex)){
            //Loops through remaining elements
            for(int j = i + 1; j < LEN; j++){
               //Checks to see if the two current elements are equal
               if(arr[i] == arr[j]) {
                   //Incresases count by 1
                   count++;
                   //Adds j index to an array and increases
                   //that array's index counter
                   //This array is used to prevent repeated 
                   //counting of the same number
                   repeatIndex[indexCount] = j;
                   indexCount++;
               }
            }
        }
        //If count is greater than 2, 
        //increments repeat by one
        if(count > 2) repeated++;
    }
    
    //Returns the value of repeated
    return repeated;
}

//Function that returns a boolean based on if
//an element's index has already been counted
bool isNotRepeat(int index, int repeats[]){
    //Loops through the repeats array
    for(int i = 0; i < LEN; i++){
        //Returns false if the current index is in the repeats array
        if(repeats[i] == index) return false;
        //Array has been initialized to -1 so 
        //the loop breaks when zero has been reached
        if(repeats[i] == -1) break;
    }
    
    //returns true if the end of the loop is reached
    return true;
}
