#include <stdio.h> 
int main(void) {
	int i; 
	double a;
	int ierr;
	// Enter information from user	
	printf("Enter an int and double\n");
	ierr=scanf("%d %lf",&i,&a);
	//& accesses location
	if (ierr !=2) printf("Problem with input\n");
	return 0;
  }
