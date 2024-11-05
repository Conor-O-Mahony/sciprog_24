#include <stdio.h>

int GCD(int a, int b);

int main(void) {
	int a, b, res;
	printf("Enter integer one: ");
	scanf("%d", &a);

	printf("Enter integer two: ");
	scanf("%d", &b);

	res = GCD(a,b);
	printf("\nGreatest common divisor = %d\n", res);
}

int GCD(int a, int b) {
	int temp;
	while (b!=0) {
		temp = b;
		b = a % b;
		a = temp;
	}
	return a;
}
