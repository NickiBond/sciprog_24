# MatrixMultiplication

This multiplies two matrices together

To compile: gcc MatrixMultiplication.c -o MatrixMultiplication -lm

To run: ./MatrixMultiplication

Output:

Array A 

  0   1   2 
  
  1   2   3 
  
  2   3   4 
  
  3   4   5 
  
  4   5   6 

 Array B 
 
  0  -1  -2  -3 
  
  1   0  -1  -2 
  
  2   1   0  -1 

 Final Array C 
 
  5   2  -1  -4 
  
  8   2  -4 -10 
  
 11   2  -7 -16 
 
 14   2 -10 -22 
 
 17   2 -13 -28 

# Main, mmc and Makefile 

Here, a makefile is used to run a more complex program (actually the same program as above) .

This means that if a change is made in one document only that part has to recompile before running.

This is important in large applications. 

Use -c flag to make .o files 

	e.g. gcc -c main.c
	e.g. gcc -c mm.c

Alternatively use the make file with the command ``make``

To remove .o files once the programme is stable use ``make clean``


