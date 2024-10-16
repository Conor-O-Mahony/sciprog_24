#include <stdio.h>

void fibstep(int *Fnm1, int *Fnm2);

int main(void) {
	int n, Fn, Fnm1;
	printf("Enter an integer n and I'll print the Fibonnaci series with n terms: ");
	scanf("%d",&n);

	if (n<=0) {
		printf("Invalid Input\n");
	} else if (n==1) {
		printf("0\n");
	} else {
		Fn = 1; Fnm1 = 0;
		printf("0 1 ");
		int i;
		for(i=2; i<n; i++) {
			fibstep(&Fn,&Fnm1);
			printf("%d ",Fn);
		}
		printf("\n");
	}
	return 0;
}

void fibstep(int *Fnm1, int *Fnm2)  {
        int temp;
        temp = *Fnm1; *Fnm1 = *Fnm1 + *Fnm2;
        *Fnm2 = temp;
}

