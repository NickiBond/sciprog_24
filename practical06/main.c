#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main(void){
//Function prototype for matmult
void matmult(int n, int p, int q, double arrayA[n][p], double arrayB[p][q], double arrayC[n][q]);
// Step 1 define variables
	int n, p, q, i, j, k;
	n=5;
	p=3;
	q=4;
	//printf(" n= %d \n", n);
// Step 2 declare arrays
	double arrayA[n][p];
	double arrayB[p][q];
	double arrayC[n][q];
	double sum;
	double val;
// Step 3 Initialise C to 0
//	printf("Initialised Array C \n");
	i=0;
	while (i<n){//Could also have used a for loop for (i=0; i<n; i++)
		j=0;
		while (j<q){
			j++;
			arrayC[i][j]=0;
//	                printf("%1f ", arrayC[i][j]);
		}
//		printf("\n");
		i++;
	}
//Step 3a Initialise A_ij=i+j
	printf("\n Array A \n");
	i=0;
        while (i<n){
                j=0;
                while (j<p){
                        arrayA[i][j]=i+j;
                        printf("%3.0f ", arrayA[i][j]);
                	j++;
		}
                printf("\n");
                i++;
        }
//Step 3b Initialise B_ij=i-j
	printf("\n Array B \n");
	i=0;
	while (i<p){
		j=0;
		while (j<q){
			arrayB[i][j]=i-j;
			printf("%3.0f ", arrayB[i][j]);
			j++;
		}
		printf("\n");
		i++;
	}	

//Step4 Multiply the Matrices
	/* Alternatively using for loops
	for (i=0; i<n; i++)
		for (j=0; j<q; j++)
			for (k=0; k<p; k++)
				C[i][j]= C[i][j]+ A[i][k]*B[k][j];
	*/
matmult(n, p, q, arrayA, arrayB, arrayC);
	printf("\n Final Array C \n");
        i=0;
	while (i<n){
                j=0;
                while (j<q){
//                      	sum=0;
			k=0;
			//printf("i,j, k= %f, %f \n", i, j);
			while (k<p){
//				val= arrayA[i][k] * arrayB[k][j];
//				sum+=val;
				//printf("i,j,k= %d, %d, %d\n", i,j,k);
                                //printf("%lf times %lf =  %lf \n",arrayA[k][j], arrayB[i][k], val);	
				k++;
			}
//                        arrayC[i][j]=sum;
			printf("%3.0f ", arrayC[i][j]);
			j++;
                }
                printf("\n");
                i++;
        }

	return(0);

}
