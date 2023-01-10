
#include "stdio.h" // printf
#include "stdlib.h" // atoi, atof
#include "newton.h"

/*
 *
 * return : Zero if the program worked allright, or the error code : 1 means not enought arguments were given. 2 means that the value to root is invalid. 3 means that the number of iterations is invalid.
 */
int main(int argc, char** argv) {

	// Check the number of arguments.
	if (argc<3) return -1;

	// Transform the char* arguments to numerical values.
	double value_to_root = atof(argv[1]);
	int iterations = atoi(argv[2]);

	// Check if the numerical values are valid.
	if (value_to_root < 0) return -2;
	if (iterations < 1) return -3;

	// Print out the initial values.
	printf("Compute the root value of %f\n", value_to_root);
      	printf("With %d iterations\n", iterations);	

	// Perform the Newton approximation of the root.
	float root = newton(value_to_root, iterations);

	// Print out the results.
	printf("Result = %f\n", root);

	// TODO add the comparison code.

	// Normal execution, return zero to indicate no error.
 	return 0;
}
