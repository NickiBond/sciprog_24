#include <stdio.h>
#include <stdlib.h>
#include <math.h>

//Function prototypes
int* allocatearray(int n);
void fillwithones(int *p, int n);
void printarray(int *p, int n);
void freepointer(int *p);

int main(void){
	int size;
	printf("Choose an array size \n");
	scanf("%d", &size);
	int *array;
	array=allocatearray(size);
	fillwithones(array, size);
	printarray (array, size);
	free(array);
	return 0 ;
}

/*
Step 1:Write a function allocatearray() that takes an integer as an argument 
and returns a pointer to an allocated memory block of that many integers.
*/

int* allocatearray(int n){
	int *a;
	a=(int *) malloc(n *sizeof(int));
	if (a==NULL){
		printf("Failed memory allocation! \n");
		exit(1);
	}
return a;
}	
/*
Step 2:Writeafunctionfillwithones()that takes a pointer to an array of integers 
and fills every cell of the array with a one.
What other argument do you need to pass to this function?
*/

// also need the length of the array 
void fillwithones(int *p, int n){
	for (int i=0; i<n; i++){
		p[i]=1;
		// Equivalently could do:
		// *(p+i)=1;
	}
}

/*
Step 3: Write a function printarray() that takes a pointer to 
an array of integers and prints its elements on screen.
*/
void printarray(int *p, int n){
	printf("\n");
	for (int i=0; i<n; i++){
	printf("%d, ", p[i]);
	}
	printf("\n");
	}

/*
Write a function to free the allocated memory.
*/

void freepointer(int *p)
{
	free(p);
}
