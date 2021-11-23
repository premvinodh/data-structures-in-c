//============================================================================
// Name        : 146_GlobalVariables.c
// Author      :
// Version     :
// Copyright   : Your copyright notice
// Description : Output the results of the following program
//				 (Demonstration of global variables)
//============================================================================

#include <stdio.h>

using namespace std;

int p1 = 5;

void test4(int m) {
	p1 += m;
	printf("\nIn the Local Function \n");
	printf("P1 = %d", p1);

	return;
}

int main() {
	int k = 5;
	test4(k);
	printf("\nIn the Main Function \n");
	printf("P1 = %d", p1);

	return 1;
}
