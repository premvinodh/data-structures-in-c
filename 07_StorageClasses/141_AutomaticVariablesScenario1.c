//============================================================================
// Name        : 141_AutomaticVariablesScenario1.c
// Author      :
// Version     :
// Copyright   : Your copyright notice
// Description : Develop a program and print the results of the following
//				 program. (Use automatic varaibles)
//============================================================================

#include <stdio.h>

using namespace std;

void test(int m) {
	auto int p = 5;
	p += m;
	printf("P = %d", p);

	return;
}

int main() {
	auto int k = 5;
	test(k);

	return 1;
}
