/*

	Fun w/ Functions
	Taking a look at functions in the C Language

*/

// Always start with include for header files 
#include <stdio.h>

// Followed by all function definitions 
// An indication to the compiler that certain calls and code blocks are functions
void function_call_a();
int function_call_b();
char function_call_c(char passed_value);

// Followed by all Constants and Macros
#define CAT_LIFE 9 

int main(){

	/* 
	   We call the first basic function, 
	   	- with no argument ()
		- expecting no return value "void"
			 
	*/
	function_call_a();

	/*
	  We call the second function,
	  	- with no argument ()
		- this time we expect an integer return value "int"

	*/
	int return_value_b = function_call_b();
	
	printf("Return Value B = %d \n",return_value_b);


	/*
	  We call the second function,
	  	- with no argument ()
		- this time we expect an integer return value "int"

	*/
	char return_value_c = function_call_c('A');
	
	printf("Return Value C = %c \n",return_value_c);


}


/*
	Here the body for the second function provides the code to header above
	Note: This function returns has no return value as it is "void"

*/
void function_call_a(){
	
	// Functions have variable as normal
	char f_value = 'a';
	// Functions can be used to perform an action
	printf("We have a working function!\nF_value = %d \n",f_value);

}


/*
	Here the body for the second function provides the code to header above
	Note: This function returns the value from within the function

*/
int function_call_b(){


	// Functions are useful when performing a repetitive task
	int f_value=CAT_LIFE;	

	printf("We have a working function!\nF_value = %d \n",f_value);

	return f_value;
}


/*
	Here the body for the second function provides the code to header above
	Note: This function returns the value from within the function

*/
char function_call_c(char passed_value){

	// We can alter the passed value to our desire
	char r_value = passed_value - 20;

	// Functions can handle areguments in many useful ways
	printf("We have a working function!\npassed_value = %c\nr_value = %c\n",passed_value, r_value);

	return r_value;
}

