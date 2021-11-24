//============================================================================
// Name        : 256_MacroHashDefineDemo.c
// Author      :
// Version     :
// Copyright   : Your copyright notice
// Description : Develop a program to run a PASCAL program in C.
//============================================================================

#include <stdio.h>
#define equals =	//#define := =
#define program main
#define begin {
#define end }
#define writeln printf
#define integer int

using namespace std;

program()
begin
	integer p, q;
	p equals 10; 		// p := 10;
	q equals 5;		// q := 5;
	writeln("P = %d, Q = %d", p, q);
end
