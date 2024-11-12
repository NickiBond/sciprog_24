#include<stdio.h>
#include<stdlib.h>
int recursive(int a, int b);
int main(void){
    int a, b, temp, gcd;
    printf("What two numbers would you like to find the greatest common denominator of? \n");
    printf("Enter two integers \n");

    // Take Input and check it is two positive integers
    if (scanf("%d %d", &a, &b)!=2){
        printf("You must enter two integers.");
        exit (0);
    }
    if (a<1 || b<1){//|| means or
        printf("Input must be positive \n");
        exit(0);
    }

    //GCD Algorithm
    //Ensure a is greater than b
    if (b>a){
        printf("2nd number was bigger than first number ... switching order \n \n");
        temp=b;
        b=a;
        a=temp;
	printf("Your numbers are %d and %d \n", a, b);
    }
//  Recursive
    gcd=recursive(a,b);
    printf("GCD is %d (found using a recursive approach)\n",gcd);
    return a;  
}

int recursive(int a, int b){
    //printf("Running recursive function \n");
    if (b==0){
        //printf("GCD is %d \n", a);
	return a;
	}
    else 
	{
//	printf("a=%d, b=%d \n", a, b);
	return recursive(b, a%b);
	}
}
