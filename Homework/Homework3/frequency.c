#include <stdio.h>
#include <string.h>
#define MAX_LENGTH 80

int main(void){
    int frequency[26] = {0};
    char alpha[26];
    int len = sizeof(frequency)/sizeof(frequency[0]);
    for(int i = 0; i < len; i++) alpha[i] = ('a' + i);
    char sentence[MAX_LENGTH];

    printf("Enter a sentence (only lowercase letters): ");
    fgets(sentence, sizeof(sentence), stdin);

    for(int i = 0; i < strlen(sentence); i++){
        for(int j = 0; j < len; j++){
            if(sentence[i] == ' ') break;
            else if(sentence[i] == alpha[j]){
                frequency[j]++;
                break;
            }
        }
    }
    for(int i = 0; i < len; i++){
        printf("frequency of %c: %d\n", alpha[i], frequency[i]);
    }
    return 0;
}