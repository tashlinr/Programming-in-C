// Author: Tashlin Reddy: rtashlin@gmail.com

#include <stdio.h>

int main (void)

{
	//program that converts 27 degrees farenheit to Celsius

	float floatTemp = 27.0, C;

	C = (floatTemp - 32)/1.8;

	printf("27 degrees Farenheit is equal to %f Celsius \n",C );

	return 0;

}

//output 
// 27 degrees Farenheit is equal to -2.777778 Celsius