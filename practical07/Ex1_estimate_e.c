#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int factorial(int x);
int main(void){
	int order;
	//float e;
	printf("Input the order of the polynomial \n");
	if (scanf("%d", &order) !=1){
		printf("You did not enter an integer \n");
		}

	printf("You inputted %d \n", order);
	double *terms;//a pointer of doubles
	terms= (double*) malloc(order*sizeof(double));
//	printf("%d! is %d \n", order, factorial(order));
	double e=0;
	for (int i=0; i<=order; i++){
		terms[i] = 1.0/ (double)(factorial(i));
		printf("Term %d for order %d is %1.14lf \n",i,  order, terms[i]);
		e+=terms[i];
		printf("e after %d terms is %1.14lf  \n", i, e);
		printf("This is a difference of %1.14lf from the real value \n",e -exp(1));
	}

	free(terms);
	return 0;
}
int factorial (int x){
	if (x<0){
		printf("You must use a positive number \n");
		exit(0);
		return(-1);
		}
	else if (x==0){
		return(1);
	}
	else{
		return (x*factorial(x-1));
	}
}
