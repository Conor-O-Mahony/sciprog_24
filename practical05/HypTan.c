#include <stdio.h>
#include <math.h>

double arctanh1(double x, double delta);
double arctanh2(double x);

int main(void) {
	double x, delta, res1[181], res2[181];
	int i;

	printf("Enter a real positive number: ");
	scanf("%lf", &delta);

	if (delta<=0) {
		printf("Delta must be a positive real number!");
		return 1;
	}

	for(i=0; i<=180; i++) {
		x = -0.9 + (i * 0.01);
		res1[i] = arctanh1(x, delta);
		res2[i] = arctanh2(x);
	}

	printf("\nMaclaurin approximation\n");
	for (i=0; i<=180; i++) {
		printf("%.10g ", res1[i]);
	}
	printf("\nLog Approximation\n");
	for (i=0; i<=180; i++) {
		printf("%.10g ", res2[i]);
	}
	printf("\n\nAbsolute difference in value\n");
	for (i=0; i<=180; i++) {
		printf("%.10g ", fabs(res1[i]-res2[i]));
	}
	printf("\nRelative difference in value\n");
	for (i=0; i<=180; i++) {
		if (fabs(res2[i])>1e-12) { //Prevent division by 0
			printf("%.10g ", fabs(1-res1[i]/res2[i]));
		} else {
			printf("N/A");
		}
	}
	printf("\n");

	return 0;
}

double arctanh1(double x, double delta) {
	//Hyperbolic arc tangent as expressed as a Maclaurin series
	double curr = x;
	double sum = curr; //When n=0, the first term=x
	double n = 1;
	while(fabs(curr) >= delta) {
		curr = pow(x, 2*n + 1)/(2*n + 1);
		sum += curr;
		n++;
	}
	return sum;
}

double arctanh2(double x) {
	//Hyperbolic arc tangent approximation using natural logarithm
	return 0.5 * (log(1+x) - log(1-x));
}
