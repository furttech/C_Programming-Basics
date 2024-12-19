/*

File:
 stay_in_scope.c
 An example of programming scope in the C Programming Language

:Lesson:
 Understanding Program Scope by analogy of conversation within an office. 

 Scope is the reach of a certain object within a program. In important business conversation, factors limit who
 can interact with one another. Programs must follow a similar patter of restraint. Both follow a top down pattern.
  
*/

#include <stdio.h>

// Functions are defined to this code body or any that include this code body
// and have a global like scope
void f_increase();
void f_decrease();

/* 
 Global variable can be access by all functions thru entire code body.
 Much like a CEO can interact with all employees
 These objects are considered "global" scope
*/

// Constants can be constidered global 
#define GLOBAL_SCOPE_CONSTANT 10

// Global Variable are possible, however bad practice and should be avoided.
int global_variable = 9000;

/*
Main:
 The Main function acts just as normal functions would in pattern of scope.
*/
void main(){

	/* 
	 Inside an office, employees often have private conversations because they
	 do not want the information leaking to the general public. An employee must
	 be inside the office, or in a programmatic sense, a variable must be inside 
	 the function code body.
	 
	 Need to Know:
	 Any Variables initialized within a function can only be access from within the function.	 
	 
	*/ 
	// Within a function objects(ie: variables) are considered "local" scope
	int local_scope_int = 42;
	// Variable type does not effect the scope in our example.
	char local_scope_char = 'l';
	
	/* 
	   Any of the variables created inside this functions can only be accessed inside the
        	{ } of the function body
	*/	
	local_scope_char++;
	local_scope_int--;
	printf("Local Scope:\n %c \n %d \n ---\n",local_scope_char,local_scope_int);
		
	f_increase();

	// We can always access the global variables inside functions
	printf("Accessing Global Variable : %d \nAccessing Constant %d \n",global_variable,GLOBAL_SCOPE_CONSTANT);
	
	f_decrease();
	
	// manipulating globals for the point of explination 
	printf("Accessing Global Variable : %d \nAccessing Constant %d \n",global_variable,GLOBAL_SCOPE_CONSTANT);
	
}

// functions can be used to manipulate globals safely but caution must be used
void f_increase(){
	global_variable+=GLOBAL_SCOPE_CONSTANT;
}

// globals can become dangerous and cause memory issues in complex applications
void f_decrease(){
	global_variable-=GLOBAL_SCOPE_CONSTANT;
}

/*

   Take Away:
	Have some fun and try it out on your own. the best way to understand the use of scope is to DO IT yourself!

   Test Ur Self:
   	Try accessing a local variable from outside its scope and see what kind of error the compiler outputs!?
*/
