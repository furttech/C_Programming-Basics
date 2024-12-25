/* 
    token_syntax.c

    Often in life the less exciting actions are never glorified
    The C language has many intricate syntax procedures defining how
    each line must behalve. Compiler reigns king above the weary coder.

    Learning all syntactical intricacies over night is not required. Simply
    encourge yourself to commit at minimum the basics to memory. 

    Need to Know:
     -Accepted Character Sets
     -Syntax formatting
     -Type Declaration
     -Special Tokens or Symbols
     -All 32 Keywords

*/

#include <stdio.h>


int main(){

    /*
    
        The C language has a certain set of characters for math + - / *
        The nomal syntax consists of A-Z a-z 0-9 
        These are special characters !"'#$%&().:,;<>{}[]/\_^~

        Identifiers are used to tell the code a specific action must be taken
        with the following value. 

        These include declaring variables, functions or a constant value
    
        Identifiers can tell the compiler a value is begin stored

        This is done by using such keywords like "int" shown below using 
        simple C math operators to perform a calculation

        [Lesson Adv: Keywords.c - Explore the depths of keywords]
    */

    int equation = 1+2/5*6-7;

    /* 
        printf is built in function call unlike keywords like "int" or "char"
        This will allow us to output the above value to our terminal for viewing

        [Lesson Adv: fun_with_functions.c - learn ins and outs of a function]
    */
    printf("%d\n",equation);

    /*
        notice the C language uses a number of spacific characters, brackets and 
        special character for controling the program flow.

        Special symbols form the foundation for the C programming control structure

        '(' ')' provide open and closing context
        our first equation is messy, but follows standard order of opperations
        
        Control structure can be added thru bracing within the equation string
    */

    int eq_2 = ((1+2)/(5*(16-7)));

    // Output is now different due to bracing structure
    printf("%d\n",eq_2);

    /*
    
        Notice the main body of this code is also controled using '{' '}' 
        brackets to tell the compiler when to start and stop reading the code
        for each segment.

        The C language has a number of these control characters which must be 
        recognized to avoid confusion. 

        However, ask yourself what would happen in the situation requiring the 
        use of these special characters. More clearly C utilizes "literals" which 
        represent the contextual value assigned to a variable, array or string.

        Fear not all of this will become clear as we move further into the language.

    */

}
