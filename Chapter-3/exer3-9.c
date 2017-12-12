// Author: Tashlin Reddy: rtashlin@gmail.com
#include <stdio.h>

int main (void)
{
	int i1 = 365, i2 = 12258, i3 = 996, j1 = 7, j2 = 23, j3 = 4, next_multiple1,next_multiple2, next_multiple3;

	next_multiple1 = i1 + j1 - i1 % j1;
	next_multiple2 = i2 + j2 - i2 % j2;
	next_multiple3 = i3 + j3 - i3 % j3;

	printf("The next largest multiple of %i and %i is %i\n", i1, j1, next_multiple1 );
	printf("The next largest multiple of %i and %i is %i\n", i2, j2, next_multiple2 );
	printf("The next largest multiple of %i and %i is %i\n", i3, j3, next_multiple3 );

	return 0;
}


// output

// The next largest multiple of 365 and 7 is 371
// The next largest multiple of 12258 and 23 is 12259
// The next largest multiple of 996 and 4 is 1000