/*Write a program for  Decryption of a given Encrypted string line with respect to given
        key number.
               The letter at position of the key and a multiple of key is interchanged with the next
       letter. Spaces and special characters are to be ignored. If the letter is the last one in the
       array, then no interchange is required.
	     Design  a  function called Decryptor to receive the Encrypted data from the main 
      function and decrypt the data.

                                               4       8    12      16    20    24       28   32   36 
     Ex:  Input String   :  “Expcet Porblmes adn eat thef mor rbeafkast”.
             If Key : 4   then,  4 multiples ---> 4,8,12,16,20,24,28,32,36 these letters has to interchange with next
                                                                   Characters.
             Output String : “Expect Problems and eat them for breakfast”.
*/
#include <stdio.h>
#include <string.h>

// Swap function
void swap(char *str, int i, int j) {
    char temp = str[i];
    str[i] = str[j];
    str[j] = temp;
}

// Function to check if a character is an alphabet letter
int isLetter(char ch) {
    return (ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z');
}

// Decryptor function
void Decryptor(char *str, int key) {
    int len = strlen(str);
    int alpha_pos = 0;

    for (int i = 0; i < len; i++) {
        if (isLetter(str[i])) {
            alpha_pos++;

            if (alpha_pos % key == 0) {
                int j = i + 1;

                // Find next alphabet character
                while (j < len && !isLetter(str[j])) {
                    j++;
                }

                // Swap only if next letter exists
                if (j < len) {
                    swap(str, i, j);
                }
            }
        }
    }
}

int main() {
    char encrypted[200];
    int key;

    printf("Enter Encrypted String: ");
    scanf(" %[^\n]", encrypted);

    printf("Enter Key: ");
    scanf("%d", &key);

    Decryptor(encrypted, key);

    printf("Decrypted String: %s\n", encrypted);

    return 0;
}
