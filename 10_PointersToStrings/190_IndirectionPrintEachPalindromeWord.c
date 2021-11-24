//============================================================================
// Name        : 190_IndirectionPrintEachPalindromeWord.c
// Author      :
// Version     :
// Copyright   : Your copyright notice
// Description : Develop a program to accept a string and output each word only
//				 if it is a palindrome. (Use indirection.)
//============================================================================

#include <stdio.h>
#include <cstring>

using namespace std;

void pal(char w1[20]) {
	int i, j, k, flag = 0;
	k = strlen(w1);
	for (i = 0, j = k - 1; i <= j; i++, j--) {
		if (*(w1 + i) != *(w1 + j)) {
			flag = 1;
			break;
		}
	}
	if (flag == 0) {
		puts(w1);
	}
	return;
}

int main() {
	char s[20], w[20];
	int l, j;

	// Eclipse buffers the output of your program and so the order is
	// not uniform. Using this sets the order to be as that of the written prg.
	// or you can use fflush(stdout); after the first printf()
	setvbuf(stdout, NULL, _IONBF, 0);

	printf("Enter a string...\n");
	// This is required because scanf("%s", s) has no buffer overflow protection
	// and hence it only takes the first word and ignores the remaining words.
	// This example uses an inverted scanset
	scanf("%[^\n]s", s); /* gets(s);  */
	l = strlen(s);
	j = 0;
	for (int i = 0; i <= l; i++) {
		if ((*(s + i) == ' ' && *(s + i + 1) != ' ') || (*(s + i) == '\0')) {
			w[j] = '\0';
			pal(w);
			j = 0;
		} else {
			if (*(s + i) != ' ') {
				w[j] = *(s + i);
				j++;
			}
		}
	}

	return 1;
}
