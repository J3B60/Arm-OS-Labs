#include <stdio.h> // required for printf
#include <stdlib.h> // required for atoi
#include "adder.h" // prototype for the function adder

int main(int argc, char * argv[]){
	if (argc != 3) {
	printf ("Usage: ./nm adder n m (with n and m integers)\n");
	exit (EXIT_SUCCESS);
	}
	int n = atoi(argv[1]); // ASCII to integer 1st argument
	int m = atoi(argv[2]); // and also for 2nd argument
	int result = adder(n,m);
	
	printf ("%d plus %d is %d\n", n, m, result);

	return 0;
}
