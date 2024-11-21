#include <stdio.h>
#include <stdlib.h>
#define MAX_FILE_NAME 100
#include "magic_square.h"

int getlines(char filename[MAX_FILE_NAME]);

int main(){  

    //define our file variable
    FILE *f;  
    char filename[MAX_FILE_NAME];
    printf("Enter file name: ");
    scanf("%s", filename);
    
    // ##! n function which gets the number of lines
    int n = getlines(filename);

    // Open the file 
    f = fopen(filename, "r");
    // Check to see if the file was found
    if (f == NULL) {
	    printf("Error opening file: %s\n", filename);
	    return 1;
    }

    int i, j;
    // Allocate memory for array of pointers (rows)
    int **matrix = (int **) malloc(n * sizeof(int *));
    if (matrix == NULL) {
	    printf("Memory allocation failed for the matrix\n");
	    return 1;
    }

    // Allocate memory for the integers in each row
    for (i=0; i<n; i++) {
	    matrix[i] = (int *) malloc(n * sizeof(int));
	    if (matrix[i] == NULL) {
		    printf("Memory allocation failed for row %d\n", i);
		    // Free any allocated rows
		    for (j=0; j<i; j++) {
			    free(matrix[j]);
		    }
		    free(matrix);
		    return 1;
	    }
    }

    // Input integer data into the matrix
    printf("\nLoaded matrix:\n");
    for (i=0; i<n; i++) {
	    for (j=0; j<n; j++) {
		    fscanf(f, "%d", &matrix[i][j]);
		    printf("%d ", matrix[i][j]);
	    }
	    printf("\n");
    }

    // Check if square matrix is magic
    int isMagic = isMagicSquare(matrix, n);

    if (isMagic == 1) {
	    printf("\nSquare matrix is magic!\n");
    } else {
	    printf("\nMatrix is not magic.\n");
    }

    // Freeing each row separately
    for (i=0; i<n; i++) {
	    free(matrix[i]);
    }

    // Free the array of pointers
    free(matrix);

    // Close the file
    fclose(f);

    return 0;
}  

//##!

int getlines(char filename[MAX_FILE_NAME]) {
    FILE *fp;
    fp = fopen(filename, "r");
    // If the file doesn't exist, return 0
    if (fp == NULL) {
	    return 0;
    }
    
    int ch_read;
    int count = 0;

    while( (ch_read = fgetc(fp)) != EOF)
    {
        if (ch_read == '\n'){
            count++;
        }
    }

    printf("No. lines, %d\n", count);
    fclose(fp); 
    return count;
}
