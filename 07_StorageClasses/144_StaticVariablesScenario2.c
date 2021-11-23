//============================================================================
// Name        : 144_StaticVariablesScenario2.c
// Author      :
// Version     :
// Copyright   : Your copyright notice
// Description : State the results of the following program.
//				 (Demonstration of static variables)
//============================================================================

#include <stdio.h>

using namespace std;

void test5(int j) {
	static int k = 0;
	k += j;
	printf("%d ", k);

	return;
}

int main() {
	int i, n;
	n = 5;
	for (i = 0; i < n; ++i) {
		test5(i);
	}

	return 1;
}
