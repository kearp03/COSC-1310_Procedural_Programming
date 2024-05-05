#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void){
    char *alphabet;
    alphabet = (char*) malloc(sizeof(char) * 27); //why not 26?
    if (alphabet == NULL) {
        printf("Out of memory!\n");
        exit (EXIT_FAILURE);
    }
    for (char c = 'a'; c <= 'z'; c++) {
        alphabet[c-'a'] = c; // note subtracting in indexing
    }
    alphabet[26] = '\0';     // end of string terminator
    printf("the allocated array: %s\n", alphabet);
    printf("out of boundary: %c\n", alphabet[28]);
    free(alphabet);
    printf("after free: %s\n", alphabet);
    return 0;
}
