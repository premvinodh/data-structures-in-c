//============================================================================
// Name        : 249_RecursiveFuncTowersOfHanoi.c
// Author      :
// Version     :
// Copyright   : Your copyright notice
// Description : Develop a recursive function to solve towers of hanoi problem.
//============================================================================

#include <stdio.h>

using namespace std;

// Since the actual towers function is defined after the main method.
// The C compiler does not know it exists. Hence this declaration is to inform
// the compiler that a towers method exists within the scope.
void towers(int, char, char, char);

int main() {
	int num;

	// Eclipse buffers the output of your program and so the order is
	// not uniform. Using this sets the order to be as that of the written prg.
	// or you can use fflush(stdout); after the first printf()
	setvbuf(stdout, NULL, _IONBF, 0);

	printf("Enter the number of disks : ");
	scanf("%d", &num);
	printf("The sequence of moves involved in the Tower of Hanoi are :\n");
	towers(num, 'A', 'C', 'B');

	return 1;
}

void towers(int num, char frompeg, char topeg, char auxpeg) {
	if (num == 1) {
		printf("\n Move disk 1 from peg %c to peg %c", frompeg, topeg);
		return;
	}
	towers(num - 1, frompeg, auxpeg, topeg);
	printf("\n Move disk %d from peg %c to peg %c", num, frompeg, topeg);
	towers(num - 1, auxpeg, topeg, frompeg);

	return;
}
