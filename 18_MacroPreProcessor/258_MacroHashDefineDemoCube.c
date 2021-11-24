//============================================================================
// Name        : 258_MacroHashDefineDemoCube.c
// Author      :
// Version     :
// Copyright   : Your copyright notice
// Description : Develop a program to calculate a cube of a number using macro.
//============================================================================

#include <stdio.h>
#define cube(m) (m * m * m)

using namespace std;

int main() {
	int p, k;

	// Eclipse buffers the output of your program and so the order is
	// not uniform. Using this sets the order to be as that of the written prg.
	// or you can use fflush(stdout); after the first printf()
	setvbuf(stdout, NULL, _IONBF, 0);

	printf("Enter a number\n");
	scanf("%d", &p);
	k = cube(p);
	printf("Cube of %d = %d", p, k);

	return 1;
}
