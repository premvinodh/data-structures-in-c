//============================================================================
// Name        : 03_ConvertTemperatureCToF.c
// Author      :
// Version     :
// Copyright   : Your copyright notice
// Description : Develop a program to accept the temperature in Centigrade
//			       and Output the same in Fahrenheit.
//============================================================================

#include <stdio.h>
using namespace std;

int main() {
	float c, f;

	// Eclipse buffers the output of your program and so the order is
	// not uniform. Using this sets the order to be as that of the written prg.
	// or you can use fflush(stdout); after the first printf()
	setvbuf(stdout, NULL, _IONBF, 0);

	printf("Enter temperature in Centigrade\n");
	scanf("%f", &c);
	f = (9 / 5) * c + 32;
	printf("Farenhiet :: %f", f);

	return 1;
}
