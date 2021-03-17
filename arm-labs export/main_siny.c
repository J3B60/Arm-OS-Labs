#include <stdio.h> // required for printf
#include <stdlib.h> // required for atoi
#include "siny.h" // prototype for the function adder

int main(int argc, char * argv[]){
	if (argc != 3) {
	printf ("Usage: %s n m (with n and m integers)\n", argv[0]);
	exit (EXIT_SUCCESS);
	}
	int n = atoi(argv[1]); // ASCII to integer 1st argument
	int m = atoi(argv[2]); // and also for 2nd argument
	double result = siny(n,m);
	
	printf ("y = sin(%d*pi) is %1.3f\n", 2*n*m, result);

	return 0;
}
