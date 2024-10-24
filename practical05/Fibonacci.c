#include <stdio.h> // this is needed for printf
#include <math.h> // 
#include <stdlib.h>
void fib(int* a, int* b);
// Using pointers so that  it updates the numbers
int main(void) {
        int n;
	// Enter information from user  
	printf("How many Fibonacci numbers would you like (an integer)? \n");
	scanf("%d", &n);
	if (n<1)
	{
		printf("n must be bigger than 1 \n");
		exit(1);
	}
	int f0=0;
	int f1=1;
	printf("The fibonacci series is \n");
	
	printf("%d, %d, ", f0, f1);
	int i;	
	for (i=2; i<n; i++)
//using <n rather than <=n because C starts counting from 0 so 8 Fibonacci numbers is number 0 to number 7
	{
		fib(&f1, &f0);//&f0 inputs the address of f0
		printf("%d, ", f1);
	}
	printf("\n");
	return 0;
}
void fib(int *a, int *b) //This function takes two pointers
{
	int next;//This is just an integer (not a pointer)
	next = *a + *b;//Here * is the dereferencing operator i.e. we get the r-value of the two inputs and sum them

	*b = *a;// Order matters here 
	*a= next;//If you accidentally switched these two lines the r-value of *a and *b would be the same. 

}
