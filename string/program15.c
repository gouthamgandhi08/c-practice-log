/*Write a program to sort a given string in ascending order.*/
#include <stdio.h>
#include <string.h>

#define SIZE 10
#define MAX_LEN 100

int main() {
    char str[SIZE][MAX_LEN], temp[MAX_LEN];

    // Input 10 strings
    printf("Enter 10 strings:\n");
    for (int i = 0; i < SIZE; i++) {
        printf("String %d: ", i + 1);
        scanf(" %[^\n]", str[i]);
    }

    // Sorting using bubble sort
    for (int i = 0; i < SIZE - 1; i++) {
        for (int j = 0; j < SIZE - i - 1; j++) {
            if (strcmp(str[j], str[j + 1]) > 0) {
                // Swap str[j] and str[j+1]
                strcpy(temp, str[j]);
                strcpy(str[j], str[j + 1]);
                strcpy(str[j + 1], temp);
            }
        }
    }

    // Print sorted strings
    printf("\nSorted Strings (Ascending Order):\n");
    for (int i = 0; i < SIZE; i++) {
        printf("%s\n", str[i]);
    }

    return 0;
}
