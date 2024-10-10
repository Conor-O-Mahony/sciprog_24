#include<stdio.h>
#include<math.h>

double tanIntegral(double a, double b, int N) {
	// Computes the integral of tan(x)dx from a to b using the Trapezoidal rule with N steps
	double prefix = (b-a)/(2*N); // Multiply everything at the end by this
	double sum = tan(a); // Sum f(a) + 2*f(x1) + ... + 2*f(xN-1) + f(b)
	double increment = (b-a)/N; // Use to iterate from a to b in N steps
	int i;
	for (i=1; i<N; i++) {
		double x = a + i * increment;
		sum += 2*tan(x);
	}
	sum += tan(b);
	return prefix*sum;
}

int main(void) {
	printf("Integral of tan(x) from 0 to pi/3 dx using N=12 steps = %f\n", tanIntegral(0,M_PI/3,12));
	printf("Value of log(2) = %f", log(2));
	return 0;
}	
