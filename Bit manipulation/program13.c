#include <stdio.h>

int main() {
    unsigned int num;
    unsigned int first_nibble, last_nibble, middle_bits, result;

    printf("Enter a number: ");
    scanf("%u", &num);

    // Extract first nibble (bits 28-31)
    first_nibble = (num >> 28) & 0xF;

    // Extract last nibble (bits 0-3)
    last_nibble = num & 0xF;

    // Clear first and last nibbles in original number
    middle_bits = num & ~(0xf000000f);

    // Swap: put last nibble at first nibble's position, first nibble at last nibble's position
    result = middle_bits | (last_nibble << 28) | first_nibble;

    for(int i=31;i>=0;i--)
    printf("%d",(result&1<<i)?1:0);
    
    return 0;
}
