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
	if (b==0) {
		return a;
	}
	return GCD(b, a % b);
}
