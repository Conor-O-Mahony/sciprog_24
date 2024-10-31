#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void) {
	int i, j, order;
	double fact, sum;

	printf("Enter an integer order for the polynomial: ");
	scanf("%d", &order);

	double *termsarray = (double *) malloc( (order+1) * sizeof(double));
	if (termsarray == NULL) {
		printf("Failed allocating memory.\n");
		return 1;
	}
	
	printf("\nTerms of the sequence: ");
	sum = 0.0;
	for (i=0; i<=order; i++) {
		fact = 1.0;
		for (j=1; j<=i; j++) {
			fact*=j;
		}

		// Check if fact has overflowed the limits of double
		if (fact == (1.0/0.0)) {
			printf("\nPrecision limit for double has been reached! Returning after %d iterations.\n", i-1);
			break;
		}

		termsarray[i] = 1.0/fact;
		printf("%.5g ", termsarray[i]);
	        sum += termsarray[i];	
	}

	printf("\n\nTotal sum: %.17g\n", sum);
	printf("Difference from euler's number: %.17g\n", fabs(exp(1)-sum));

	free(termsarray);

	return 0;
}
