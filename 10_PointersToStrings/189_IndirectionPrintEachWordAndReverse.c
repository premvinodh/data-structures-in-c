//============================================================================
// Name        : 189_IndirectionPrintEachWordAndReverse.c
// Author      :
// Version     :
// Copyright   : Your copyright notice
// Description : Develop a program to accept a string and each word separately
//				 along with its reverse. (Use indirection.)
//============================================================================

#include <stdio.h>
#include <cstring>

using namespace std;

void reverse(char w1[20]) {
	char r[20];
	int i, j, k;
	k = strlen(w1);
	for (i = k - 1, j = 0; i >= 0; i--, j++) {
		r[j] = w1[i];
	}
	r[j] = '\0';
	printf("Original Word :: %s Reversed Word :: %s\n", w1, r);
	return;
}

int main() {
	char a[20], w[20];
	int l, j;

	// Eclipse buffers the output of your program and so the order is
	// not uniform. Using this sets the order to be as that of the written prg.
	// or you can use fflush(stdout); after the first printf()
	setvbuf(stdout, NULL, _IONBF, 0);

	printf("Enter a string...\n");
	// This is required because scanf("%s", s) has no buffer overflow protection
	// and hence it only takes the first word and ignores the remaining words.
	// This example uses an inverted scanset
	scanf("%[^\n]s", a); /* gets(a);  */
	l = strlen(a);
	j = 0;
	for (int i = 0; i <= l; i++) {
		if ((*(a + i) == ' ' && *(a + i + 1) != ' ') || (*(a + i) == '\0')) {
			w[j] = '\0';
			reverse(w);
			j = 0;
		} else {
			if (*(a + i) != ' ') {
				w[j] = *(a + i);
				j++;
			}
		}
	}

	return 1;
}
