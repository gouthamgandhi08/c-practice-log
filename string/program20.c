/*Write a program to read two strings through the keyboard like the following example 
       and replace any word of  the second string with the first string.
      Ex: Input:-     Fist String      : “Tomorrow”
                            Second String : “Today  is  Sunday”
                             Replace word : “Today”.
                             Output:-  “Tomorrow is Sunday”          
*/
#include <stdio.h>
#include <string.h>

#define MAX 200

int main() {
    char newWord[50], sentence[MAX], replaceWord[50];
    char result[MAX] = "";
    char word[50];
    int i = 0, j = 0, k = 0;

    // Input
    printf("First String (replacement word): ");
    scanf(" %[^\n]", newWord);

    printf("Second String (sentence): ");
    scanf(" %[^\n]", sentence);

    printf("Replace Word (word to be replaced): ");
    scanf(" %[^\n]", replaceWord);

    while (sentence[i] != '\0') {
        // Build word until space or end
        if (sentence[i] != ' ') {
            word[j++] = sentence[i];
        } else {
            word[j] = '\0';
            // Compare and append to result
            if (strcmp(word, replaceWord) == 0) {
                strcat(result, newWord);
            } else {
                strcat(result, word);
            }
            strcat(result, " ");
            j = 0; // reset word index
        }
        i++;
    }

    // Handle last word
    word[j] = '\0';
    if (strcmp(word, replaceWord) == 0) {
        strcat(result, newWord);
    } else {
        strcat(result, word);
    }

    // Output
    printf("Modified Sentence: %s\n", result);

    return 0;
}
