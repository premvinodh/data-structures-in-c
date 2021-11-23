//============================================================================
// Name        : 143_StaticVariablesScenario1.c
// Author      :
// Version     :
// Copyright   : Your copyright notice
// Description : Output the results of the following program
//				 (Demonstration of static variables)
//============================================================================

#include <stdio.h>

using namespace std;

void test2(int m) {
	static int p = 5;
	p += m;
	printf("P = %d", p);

	return;
}

int main() {
	int k = 5;
	printf("Test1-call-first-time \n");
	test2(k);
	printf("\nTest1-call-second-time \n");
	test2(k);

	return 1;
}
