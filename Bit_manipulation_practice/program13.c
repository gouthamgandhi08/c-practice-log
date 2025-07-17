/*
13. Write a programme for swapping first and last nibbles in a given integer.
      Ex: 
      Suppose num = 10
      It's Binary is    0000000000000000000000000001010
      After swap        1010000000000000000000000000000
*/
#include <stdio.h>
int main() {
    int num;
    int first_nibble, last_nibble, middle_bits, result;

    printf("Enter a number: ");
    scanf("%d", &num);
    printf("Before swap\n");
    for(int i=31;i>=0;i--)
    printf("%d",(num & (1<<i))?1:0); 
    // Extract first nibble (bits 28-31)
    first_nibble = (num >> 28) & 0xF;

    // Extract last nibble (bits 0-3)
    last_nibble = num & 0xF;

    // Clear first and last nibbles in original number
    middle_bits = num & ~(0xf000000f);

    // Swap: put last nibble at first nibble's position, first nibble at last nibble's position
    result = middle_bits | (last_nibble << 28) | first_nibble;
    printf("\nAfter swap\n");
    for(int i=31;i>=0;i--)
    printf("%d",(result&1<<i)?1:0);

    return 0;
}
