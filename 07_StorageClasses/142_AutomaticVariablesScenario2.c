//============================================================================
// Name        : 142_AutomaticVariablesScenario2.c
// Author      :
// Version     :
// Copyright   : Your copyright notice
// Description : Develop a program and print the results of the following
//				 program. (Use automatic varaibles)
//============================================================================

#include <stdio.h>

using namespace std;

void test1(int m) {
	auto int p = 5;
	p += m;
	printf("P = %d", p);

	return;
}

int main() {
	auto int k;
	k = 5;
	printf("Test1-call-first-time \n");
	test1(k);
	printf("\nTest1-call-second-time \n");
	test1(k);

	return 1;
}
