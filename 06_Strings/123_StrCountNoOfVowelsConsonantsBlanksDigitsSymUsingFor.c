//============================================================================
// Name        : 123_StrCountNoOfVowelsConsonantsBlanksDigitsSymUsingFor.c
// Author      :
// Version     :
// Copyright   : Your copyright notice
// Description : Develop a program to accept a string and output
//					a) the number of vowels
//					b) the number of consonants
//					c) the number of digits
//					d) the number of blanks
//					e) the number of other special symbols if any using for.
//============================================================================

#include <ctype.h>
#include <stdio.h>
#include <string.h>

using namespace std;

int main() {
	char p[40], c;
	int i, l, nv, nb, nd, nc, no;

	// Eclipse buffers the output of your program and so the order is
	// not uniform. Using this sets the order to be as that of the written prg.
	// or you can use fflush(stdout); after the first printf()
	setvbuf(stdout, NULL, _IONBF, 0);

	printf("Give string\n");
	gets(p);
	nv = nc = nd = nb = no = 0;
	l = strlen(p);
	for (i = 0; i < l; i++) {
		c = tolower(p[i]);
		if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
			nv += 1;
		} else if (c > 'a' && c <= 'z') {
			nc += 1;
		} else if (c >= '0' && c <= '9') {
			nd += 1;
		} else if (c == ' ') {
			nb += 1;
		} else {
			no += 1;
		}
	}
	printf("No. of vowels = %d", nv);
	printf("\nNo. of consonants = %d", nc);
	printf("\nNo. of digits = %d", nd);
	printf("\nNo. of blanks = %d", nb);
	printf("\nNo. of special symbols = %d", no);

	return 1;
}
