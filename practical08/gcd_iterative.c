#include<stdio.h>
#include<stdlib.h>

//Iterative version of Euclid's algorithm to calculate greatest common divisior of two positive integers

int main(void){
    int a, b, temp;
    printf("What two numbers would you like to find the greatest common denominator of? \n");
    printf("Enter two integers \n");

    // Take Input and check it is two positive integers
    if (scanf("%d %d", &a, &b)!=2){
        printf("You must enter two integers.");
        exit (0);
    }
    if (a<1 || b<1){
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
// Iterative
//    printf("Intermediate Steps:\n");
    while (b!=0){
        temp =b;
        b= a%b;
        a=temp; 
//          printf("a = %d, b= %d \n", a, b);
    }
    printf("\n GCD= %d (found using iterative approach)\n",a );
    return a;  
}
