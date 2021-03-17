#include <stdio.h> // required for printf
#include <stdlib.h> // required for atoi

int main(int argc, char * argv[]){
	if (argc !=3){
	printf ("Usage: ./nm adder n m (with n and m integers)\n");
	exit (EXIT_SUCCESS);
	} 
	int n = atoi(argv[1]); // ASCII to integer 1st argument
	int m = atoi(argv[2]); // and also for the second argumebnt
	float result = n + m;

	printf ("%d + %d = %f\n", n, m, result);

	return 0;
}
