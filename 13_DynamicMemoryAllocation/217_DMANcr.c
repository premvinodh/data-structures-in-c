//============================================================================
// Name        : 217_DMANcr.c
// Author      :
// Version     :
// Copyright   : Your copyright notice
// Description : Develop a program to compute Ncr which returns result
//				 using reference parameter. (Use dynamic memory allocation)
//============================================================================

#include <stdio.h>

using namespace std;

void fact(int k, int *fk) {
	int fp1 = 1;
	for (int i = 2; i <= k; i++) {
		fp1 = fp1 * i;
	}
	*fk = fp1;

	return;
}

int main() {
	int n, fn, r, fr, p, fp;
	float ncr;

	// Eclipse buffers the output of your program and so the order is
	// not uniform. Using this sets the order to be as that of the written prg.
	// or you can use fflush(stdout); after the first printf()
	setvbuf(stdout, NULL, _IONBF, 0);

	printf("Enter value for n...\n");
	scanf("%d", &n);
	printf("Enter value for r...\n");
	scanf("%d", &r);
	p = n - r;
	fn = 1;
	fr = 1;
	fp = 1;
	fact(n, &fn);
	fact(r, &fr);
	fact(p, &fp);
	ncr = fn / (fr * fp);
	printf("Ncr = %f", ncr);

	return 1;
}
