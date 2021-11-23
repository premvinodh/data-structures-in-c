//============================================================================
// Name        : 145_ExternalVariables.c
// Author      :
// Version     :
// Copyright   : Your copyright notice
// Description : Output the results of the following program
//				 (Demonstration of external variables)
//============================================================================

#include <stdio.h>

using namespace std;

int p = 5;

void test3(int m) {
	p += m;
	printf("\nIn the Local Function \n");
	printf("P = %d", p);

	return;
}

int main() {
	extern int p;
	int k = 5;
	test3(k);
	printf("\nIn the Main Function \n");
	printf("P = %d", p);

	return 1;
}
