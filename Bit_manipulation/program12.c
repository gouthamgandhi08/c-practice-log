/*
12. Write a program to delete no.of  bits from particular position in a given number.
       Input the no.of bits, at runtime.
        Ex:  
        Suppose num  =  100;
        It's Binaray is     00000000000000000000000001100100
        delete 2 bits from 4th position
        then result   is     00000000000000000000000000011100
*/
#include <stdio.h>

int main() {
    unsigned int num, pos, nbits, result;
    
    printf("Enter the number: ");
    scanf("%u", &num);

    printf("Enter the starting bit position (1 = LSB): ");
    scanf("%u", &pos);

    printf("Enter the number of bits to delete: ");
    scanf("%u", &nbits);

    unsigned int lower = num & ((1U << pos-1) - 1); // bits below position
    unsigned int upper = num >> (pos-1 + nbits);   // bits above deleted bits

    result = (upper << (pos-1)) | lower;

    printf("Original number: ");
    for(int i=31;i>=0;i--){
       printf("%d",(num&1<<i)?1:0);
   }
    printf("\n Result after deleting %u bits from position %u: \n", nbits, pos);
    for(int i=31;i>=0;i--){
       printf("%d",(result & 1<<i)?1:0);
     }
    return 0;
}
