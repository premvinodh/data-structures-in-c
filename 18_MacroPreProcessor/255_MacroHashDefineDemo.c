//============================================================================
// Name        : 255_MacroHashDefineDemo.c
// Author      :
// Version     :
// Copyright   : Your copyright notice
// Description : Develop a program to accept a 'n' numbers into an array and
//				 output them.
//============================================================================

#include <stdio.h>
#define m 20 // don’t put semicolon after 20 it will not work.
#define loop(p, q) for(p = 0; p < q; p++)

using namespace std;

int main() {
	int a[m], n, i; 

	// Eclipse buffers the output of your program and so the order is
	// not uniform. Using this sets the order to be as that of the written prg.
	// or you can use fflush(stdout); after the first printf()
	setvbuf(stdout, NULL, _IONBF, 0);

	printf("Enter how many numbers...Maximum 20\n");
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		printf("Enter element");
		scanf("%d", &a[i]);
	}
	printf("\nInput Order :: ");
	loop(i, n)
		printf("%d ", a[i]);

	return 1;
}
