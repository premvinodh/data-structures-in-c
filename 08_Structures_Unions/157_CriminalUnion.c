//============================================================================
// Name        : 157_CriminalUnion.c
// Author      :
// Version     :
// Copyright   : Your copyright notice
// Description : Develop a program to accept the data of criminals and store
//				   them using an efficient data structure. Also ouput the result.
//	A criminal information consists of the following details ::-
//	surname, father's name, nickname, colour, language spoken, style of speaking,
//  approximate age, approximate height, etc.  
//	Only one of the above items is always available for 'n' number of criminals.
//============================================================================

#include <stdio.h>

using namespace std;

union criminal {
	char sname[30];
	char fname[50];
	char nname[50];
	char colour[10];
	char lang[20];
	char style[20];
	int age;
	int height;
};

struct crimininal_detail {
	int code;
	union criminal cri;
};

int main() {
	int n;
	struct crimininal_detail p[30];

	// Eclipse buffers the output of your program and so the order is
	// not uniform. Using this sets the order to be as that of the written prg.
	// or you can use fflush(stdout); after the first printf()
	setvbuf(stdout, NULL, _IONBF, 0);

	printf("Enter how many criminals... Maximum 30\n");
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		printf("Enter Criminal Code %d\n", (i + 1));
		scanf("%d", &p[i].code);
		//
		switch (p[i].code) {
		case 1:
			printf("Enter surname \n");
			scanf("%s", p[i].cri.sname);
			break;

		case 2:
			printf("Enter father's name \n");
			scanf("%s", p[i].cri.fname);
			break;

		case 3:
			printf("Enter nick name \n");
			scanf("%s", p[i].cri.nname);
			break;

		case 4:
			printf("Enter colour \n");
			scanf("%s", p[i].cri.colour);
			break;

		case 5:
			printf("Enter language spoken \n");
			scanf("%s", p[i].cri.lang);
			break;

		case 6:
			printf("Enter style of speaking \n");
			scanf("%s", p[i].cri.style);
			break;

		case 7:
			printf("Enter approximate age \n");
			scanf("%d", p[i].cri.age);
			break;

		case 8:
			printf("Enter approximate height \n");
			scanf("%d", p[i].cri.height);
			break;
		}
	}

	for (int i = 0; i < n; i++) {
		printf("\nCode %d", p[i].code);
		switch (p[i].code) {
		case 1:
			printf("\nSurname %s", p[i].cri.sname);
			break;

		case 2:
			printf("\nFather's Name %s", p[i].cri.fname);
			break;

		case 3:
			printf("\nNick Name %s", p[i].cri.nname);
			break;

		case 4:
			printf("\nColour %s", p[i].cri.colour);
			break;

		case 5:
			printf("\nLanguage %s", p[i].cri.lang);
			break;

		case 6:
			printf("\nStyle %s", p[i].cri.style);
			break;

		case 7:
			printf("\nAge %d", p[i].cri.age);
			break;

		case 8:
			printf("\nHeight %d", p[i].cri.height);
			break;
		}
	}

	return 1;
}
