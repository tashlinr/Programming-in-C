#include <stdio.h>

int main (void)

{
	int integerVar = 100;
	float floatVar = 331.79;
	double doubleVar =8.12e12;
	char charVar = 'W';

	_Bool boolVar = 0;

	printf("integerVar = %i \n", integerVar);
	printf("floatVar = %f \n", floatVar);
	printf("doubleVar = %e \n", doubleVar);
	printf("doubleVar = %g \n", doubleVar);
	printf("charVar = %c \n", charVar);

	printf("boolVar = %i \n", boolVar);

	return 0;

}