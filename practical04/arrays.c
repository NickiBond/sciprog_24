#include <stdio.h> // this is needed for printf
#include <math.h> // this is needed for pi and tan
int main(void) {

	float array[13];
	// Section 1: Degrees to Radians Converter
	float deg=30;
	float rad;
	rad=(M_PI*deg)/(180);
	printf("The value of %f degrees in radians is %f \n", deg, rad);
	// Section 2: Loop with Counter that goes from 0 to 12
	int i;
	int angle_deg;
	float angle_rad;
	float area_under_graph;
	for (i=0; i<13; i++){
		//printf("The value of i is %d \n", i);
		//Section 3: Turn these values of i into degree angles
		angle_deg = 5*i;
		//printf("The value of angle_deg is %d \n", angle_deg);
		//Section 4: Turn these degrees into radians
		angle_rad=(M_PI*(float)angle_deg)/(180.0);

		array[i]=tan(angle_rad);
		printf("angle= %d degrees or %f radians, tan(angle)= %f \n", angle_deg,angle_rad, array[i]);
		if (i==0) {
			area_under_graph+=array[i];
		}
		else if (i==12) {
			area_under_graph+= array[i];
		}
		else {
			area_under_graph+=2.0*array[i];
		}	

	}
	area_under_graph=((M_PI/3.0-0.0)/(2.0*12.0))*area_under_graph;
	printf("Area under graph: %f \n", area_under_graph);	
	float analytical,diff_btw_comp_analytical;
        analytical= log(2.0);
        printf("Analytical Result = %f \n", analytical);
        diff_btw_comp_analytical=fabs(area_under_graph-analytical);
        printf("Difference between Computational and Analytical Result = %f \n", diff_btw_comp_analytical);

        printf("\n");

return 0;
}
