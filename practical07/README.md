# Ex1_estimate_e.c

This function estimates the value of e using a Taylor series expansion up to an order that the user chooses. 

Note that for large orders the estimate actually gets worse due to floating point precision. 

To compile: 

gcc Ex1_estimate_e.c -o Ex1_estimate_e

To run: 

./Ex1_estimate_e 

Output:

Input the order of the polynomial 
10
You inputted 10 
Term 0 for order 10 is 1.00000000000000 
e after 0 terms is 1.00000000000000  
This is a difference of -1.71828182845905 from the real value 
Term 1 for order 10 is 1.00000000000000 
e after 1 terms is 2.00000000000000  
This is a difference of -0.71828182845905 from the real value 
Term 2 for order 10 is 0.50000000000000 
e after 2 terms is 2.50000000000000  
This is a difference of -0.21828182845905 from the real value 
Term 3 for order 10 is 0.16666666666667 
e after 3 terms is 2.66666666666667  
This is a difference of -0.05161516179238 from the real value 
Term 4 for order 10 is 0.04166666666667 
e after 4 terms is 2.70833333333333  
This is a difference of -0.00994849512571 from the real value 
Term 5 for order 10 is 0.00833333333333 
e after 5 terms is 2.71666666666667  
This is a difference of -0.00161516179238 from the real value 
Term 6 for order 10 is 0.00138888888889 
e after 6 terms is 2.71805555555556  
This is a difference of -0.00022627290349 from the real value 
Term 7 for order 10 is 0.00019841269841 
e after 7 terms is 2.71825396825397  
This is a difference of -0.00002786020508 from the real value 
Term 8 for order 10 is 0.00002480158730 
e after 8 terms is 2.71827876984127  
This is a difference of -0.00000305861778 from the real value 
Term 9 for order 10 is 0.00000275573192 
e after 9 terms is 2.71828152557319  
This is a difference of -0.00000030288585 from the real value 
Term 10 for order 10 is 0.00000027557319 
e after 10 terms is 2.71828180114638  
This is a difference of -0.00000002731266 from the real value 


# Ex2_MemoryAllocation.c

This function allocates memory dynamically to an array which the user chooses the size of

To compile: gcc Ex2_MemoryAllocation.c -o Ex2_MemoryAllocation

To run: ./Ex2_MemoryAllocation 

Output: 

Choose an array size 
10

1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 

