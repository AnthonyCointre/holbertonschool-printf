#include "main.h"
#include <stdio.h>

/**
* convert_binary - Convert an unsigned int to binary
* @x: The argument to convert
*
* Return: 
*/

void convert_binary(unsigned int num)
{
      if (num == 0) {
        printf("0");
        return;
    }
   
   // Stores binary representation of number.
   int binaryNum[32]; // Assuming 32 bit integer.
   int i=0;
   
   for ( ;num > 0; ){
      binaryNum[i++] = num % 2;
      num /= 2;
   }
}