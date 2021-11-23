//============================================================================
// Name        : 139_DisplayIntegerInStringForm.c
// Author      :
// Version     :
// Copyright   : Your copyright notice
// Description : Develop a program to accept an integer and output it in a
//				 string form
//				 For eg., Convert 143 to ONE FOUR THREE
//============================================================================

#include <stdio.h>

using namespace std;

int main() {
	int n, i, d, a[10];

	// Eclipse buffers the output of your program and so the order is
	// not uniform. Using this sets the order to be as that of the written prg.
	// or you can use fflush(stdout); after the first printf()
	setvbuf(stdout, NULL, _IONBF, 0);

	printf("Give number");
	scanf("%d", &n);
	i = 0;
	while (n != 0) {
		d = n % 10;
		a[i] = d;
		n = n / 10;
		i++;
	}
	i--;
	for (int j = i; j >= 0; j--) {
		switch (a[j]) {
		case 0:
			printf("ZERO ");
			break;
		case 1:
			printf("ONE ");
			break;
		case 2:
			printf("TWO ");
			break;
		case 3:
			printf("THREE ");
			break;
		case 4:
			printf("FOUR ");
			break;
		case 5:
			printf("FIVE ");
			break;
		case 6:
			printf("SIX ");
			break;
		case 7:
			printf("SEVEN ");
			break;
		case 8:
			printf("EIGHT ");
			break;
		case 9:
			printf("NINE ");
			break;
		}
	}

	return 1;
}
