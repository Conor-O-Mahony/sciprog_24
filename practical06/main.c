#include <stdio.h>
int n = 5;
int p = 3;
int q = 4;

void matrixmultiply(int n, int p, int q, int A[n][p], int B[p][q], int C[n][q]);

int main(void) {
	int i, j;
	int A[n][p], B[p][q], C[n][q];

	// Initialise Matrix A
	printf("Matrix A\n");
	for (i=0; i<n; i++) {
		for (j=0; j<p; j++) {
			A[i][j] = i + j;
			printf(" %d ", A[i][j]);
		}
		printf("\n");
	}
	// Ininitalise Matrix B
	printf("\nMatrix B\n");
	for (i=0; i<p; i++) {
                for (j=0; j<q; j++) {
                        B[i][j] = i - j;
			printf(" %d ",B[i][j]);
                }
		printf("\n");
        }

	// Initialise Matrix C
	for (i=0; i<n; i++) {
		for (j=0; j<q; j++) {
			C[i][j] = 0;
		}
	}

	//Call the matrixmultiply function to calculate C = A*B
	printf("\nInitilaised Matricies. Calculating resulting matrix C.\n");
	matrixmultiply(n,p,q,A,B,C);

	// Print the resulting matrix C
	for (i=0; i<n; i++) {
                for (j=0; j<q; j++) {
                        printf(" %d ", C[i][j]);
                }
		printf("\n");
        }
	printf("\n");
	return 0;
}

