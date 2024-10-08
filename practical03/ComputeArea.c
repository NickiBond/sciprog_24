#include <stdio.h> // this is needed for printf
#include <math.h> // this is needed for pi and tan
int main(void) {
// Section 1 Print Statements
/*
	int int1, int2;
	float float1, float2;

	int1=2;
	int2=4;
	float1=3.7;
	float2=0.3;

	printf("Two ints %d %d and two floats %f %f \n", int1, int2, float1, float2);
        printf("Two ints %d %d and two floats with 4 decimal places  %.4f %.4f \n", int1, int2, float1, float2);
*/
// Section 3 Exercises
// Point 1
	float a,b,sum;
	a=0.0;
	b=M_PI/3;

	// printf("%f %f \n", a, b); // Checks that M_PI is working as expected. 
// Point 2
	sum=tan(a)+tan(b);
	//printf("%f \n", sum);
// Point 3 and 4 less than 11 because I only want internal points not end points
	float point,diff;
	int i;
	point=a;
	diff=(b-a)/12;
	//printf("%f, %f, %f \n", point,diff,a);

	for  (i=0; i<11; i++){
		// The point is moved before the sum is done i.e. not done at the point 0
		// Less than 11 because there are 11 numbers counting 0,1,2,3,4,5,6,7,8,9,10
		point=point+diff; 
		//printf("%f,", point);
		sum = sum +2*tan(point);
		/*
		switch(i%2)
		{case 0:
		printf("i is even: i= %d\n",i);
		}*/
	}
// Point 5 I have already added it to end points just need to multiply by b-a/2N
// We need to make sure b and a are in radians.
	// could also do sum += ...
	sum = sum*(b-a)/(2*12);
	printf("Computed area under graph = %f \n", sum);

// Point 6 
	float analytical,diff_btw_comp_analytical;
	analytical= log(2.0);
	printf("Analytical Result = %f \n", analytical);
	diff_btw_comp_analytical=fabs(sum-analytical);
	printf("Difference between Computational and Analytical Result = %f \n", diff_btw_comp_analytical);

	printf("\n");


	return 0;

}
