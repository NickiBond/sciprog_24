// Matrix Multiplication C= A*B

void matmult(int n, int p, int q, double arrayA[n][p], double arrayB[p][q], double arrayC[n][q]){
//	printf("\n Final Array C \n");
	int i,j,k;// Loop indices
	int val, sum;
        i=0;
	while (i<n){
                j=0;
                while (j<q){
                      	sum=0;
			k=0;
			//printf("i,j, k= %f, %f \n", i, j);
			while (k<p){
				val= arrayA[i][k] * arrayB[k][j];
				sum+=val;
				//printf("i,j,k= %d, %d, %d\n", i,j,k);
                                //printf("%lf times %lf =  %lf \n",arrayA[k][j], arrayB[i][k], val);	
				k++;
			}
                        arrayC[i][j]=sum;
//			printf("%3.0f ", arrayC[i][j]);
			j++;
                }
//                printf("\n");
                i++;
        }
}
