//============================================================================
// Name        : 135_StrNoOfOccurrencesOfWord.c
// Author      :
// Version     :
// Copyright   : Your copyright notice
// Description : Develop a program to accept a word and output the
//				 number of occurrences of that word in the string. (Please
//				 check this program- Not working)
//============================================================================

#include <stdio.h>
#include <cstring>

using namespace std;

int main() {
	char p[50], w[15], w1[15];
	int i, k, l, flag, no;

	// Eclipse buffers the output of your program and so the order is
	// not uniform. Using this sets the order to be as that of the written prg.
	// or you can use fflush(stdout); after the first printf()
	setvbuf(stdout, NULL, _IONBF, 0);

	printf("Give string\n");
	gets(p);
	printf("Give search word\n");
	gets(w1);
	l = strlen(p);
	k = 0;
	no = 0;
	flag = 0;
	for (i = 0; i <= l; i++) {
		if (p[i] != ' ') {
			w[k] = p[i];
			k++;
		} else {
			//if ((p[i] == '\0') || (p[i] == ' ' && p[i + 1] != ' ')) {
				w[k] = '\0';
				if (strcmp(w, w1) == 0) {
					flag = 1;
					break;
				}
				k = 0;
			//}
			if (flag == 1) {
				no++;
			}

		}
	}
	printf("No of occurrences :: %d", no);

	return 1;
}
