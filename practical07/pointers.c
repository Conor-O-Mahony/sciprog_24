#include <stdio.h>
#include <stdlib.h>

int *allocatearray(int n);
void deallocatearray(int *arr);
void fillwithones(int *arr, int n);
void printarray(int *arr, int n);

int main(void) {
	int n, *intarray;

	printf("Enter a number of terms: ");
	scanf("%d", &n);

	intarray = allocatearray(n);
	if (intarray == NULL) {
		printf("Memory allocation failed.\n");
		return 1;
	}
	fillwithones(intarray, n);
	printarray(intarray, n);
	deallocatearray(intarray);

	return 0;
}

int *allocatearray(int n) {
	int *arr;
	arr = (int *) malloc(n * sizeof(int));
	return arr;
}

void deallocatearray(int *arr) {
	free(arr);
}

void fillwithones(int *arr, int n) {
	int i;
	for (i=0; i<n; i++) {
		arr[i] = 1;
	}
}

void printarray(int *arr, int n) {
	int i;
	for (i=0; i<n; i++) {
		printf("%d ", arr[i]);
	}
	printf("\n");
}
