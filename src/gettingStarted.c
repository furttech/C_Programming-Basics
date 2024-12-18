/*
	:: C Programming Basics ::
	A Quick Over View for the C language.
	
	@furttech

*/
/* <-- start comment section
   
   This is a multi line comment section
 
end comment section -->  */ 

// This is a single line comment and is not code


// Below are header files used to declare built in functions like printf
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

// C also has the ability to define macros or constants
#define PI 3.1415
#define MIN 10

// An example of a global variable decleration 
int Access_key = 420;

// Below is our first section of C program code
// Called the main 'function' this code runs at start of program 
void main() {

 	// Code inside the fuction is contained using '{' '}' brackets 

	/*
		C Language has a few basic types which
		describe a variables size

		To start we take a look at int and char	
	
		A variable has the following syntax

		[ type ] [ name ] = [ value ];	
	*/
	
	// Store numbers with "int"
	int number = 5;

	// Store single ascii characters using "char"
	char character = 'a';


	/*

		printf is an extremly powerful function
		It can be used to output values quickly
		to the screen providing instant feedback
		from the running program.
		
		It has a somewhat complex syntax but a
		few minutes of study will clear everything up

	*/


	// Output the stored value of a number with '%d' 
	printf("number = %d \n" ,number);

	// Output the stored value of a character with '%d'
	printf("character = %d \n",character);

	/*
		Basic Math Fuctions

		A number of basic algebra functions are supported by 
		the C compiler. This allows a programmer to solve any
		number of math problems by coding out the equation using C.
	*/

	// A simple start 'math' should equal two
	int math = 1 + 1;
	
	// A simple subtraction 
	int is = 2 - 1;

	// A multiplication problem
	int not = 2 * 1;

	// A division problem
	int hard = 2 / 2;

	// This can be coupled with bracing to control opperation
	int equation = (math + is) - (not * hard);
	
	// Here we print out result from our equations 
	printf("Output: \n %d %d %d %d \n", math, is, not, hard);

	// print out the complex equation
	printf("Equation: %d \n", equation);

	// Dont forget the global variable. It can be access in here too!
	printf("Global: %d \n", Access_key);
}
