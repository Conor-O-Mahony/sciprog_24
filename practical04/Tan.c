#include <stdio.h>
#include <math.h>
#define N 12
float degtorad(float arg);
float tanIntegral(void);
float pi;
float tanarray[N+1];

int main(void) {
	float degangle, radangle;
	float tanvalue;
	pi = atanf(1.0)*4.0;
       	int i;
	for(i=0; i<=N; i++) {
		degangle = 5*i;
		radangle = degtorad(degangle);
		tanarray[i] = tan(radangle);
	}

	printf("Values in tanarray\n");
	for(i=0; i<=N; i++) {
		printf("%f ", tanarray[i]);
	}
	printf("\n\n");

	tanvalue = tanIntegral();
	printf("Integral of tan(x) from 0 to pi/3 dx using N=12 steps = %f\n", tanvalue);
	printf("Value of log(2) = %f\n", log(2));
	printf("Absolute difference = %f\n", fabs(tanvalue-log(2)));
	printf("Relative difference = %f\n", fabs(1-(tanvalue/log(2)))); 

	return 0;
}

float degtorad(float arg) {
	return ( (pi * arg)/180.0 );
}

float tanIntegral(void) {
	// Computes the integral of tan(x)dx from 0 to 60 degrees using the Trapezoidal rule
	float a = degtorad(0);
	float b = degtorad(60);
	float sum = tanarray[0]; // Sum f(a) + 2*f(x1) + ... + 2*f(xN-1) + f(b)
	int i;
	for (i=1; i<N; i++) {
		sum += 2*tanarray[i];
	}
	sum += tanarray[12];
	return (b-a)*sum/(2*N);
}
