//============================================================================
// Name        : 192_IndirectionWordExistsInAString.c
// Author      :
// Version     :
// Copyright   : Your copyright notice
// Description : Develop a program to accept a string and check whether a given
//				   word is existing in the string or not. (Use indirection.)
//============================================================================

#include <stdio.h>
#include <cstring>

using namespace std;

int main() {
	char a[20], sw[20], w[20];
	int l, i, j, flag;

	// Eclipse buffers the output of your program and so the order is
	// not uniform. Using this sets the order to be as that of the written prg.
	// or you can use fflush(stdout); after the first printf()
	setvbuf(stdout, NULL, _IONBF, 0);

	printf("Enter a string...\n");
	// This is required because scanf("%s", s) has no buffer overflow protection
	// and hence it only takes the first word and ignores the remaining words.
	// This example uses an inverted scanset
	scanf("%[^\n]s", a); /* gets(a);  */
	printf("Enter search word\n");
	scanf("%s", sw); /* gets(sw);  */
	l = strlen(a);
	j = 0;
	flag = 0;
	for (i = 0; i <= l; i++) {
		if ((*(a + i) == ' ' && *(a + i + 1) != ' ') || (*(a + i) == '\0')) {
			w[j] = '\0';
			if (strcmp(sw, w) == 0) {
				flag = 1;
				break;
			}
			j = 0;
		} else {
			if (*(a + i) != ' ') {
				w[j] = *(a + i);
				j++;
			}
		}
	}
	if (flag == 1) {
		printf("Success");
	} else {
		printf("Unsuccess");
	}

	return 1;
}
