/*
    keywords.c

    Exploring the intricacies behind the thirty two C programming
    keywords. These follow the recognized C99 standard 

    A dry topic of the C language often overlooked for brevity.

*/

#include <stdio.h>


void main(void){
    /*
        You probubly have pick up by now allot of the beginner tutorials use 
        variables of the following type. 
        "int" [name] = [number];
        
        Understanding exactly what "int" keyword represents is vital to C language 
        development because it specifies a variables size in memory. Before we dive 
        futher into why this is. Lets try "double". 
    */

    // Repeating the above equ with type double instead
    double d_eq_1 = 1+2/5*6-7;
    double d_eq_2 = ((1+2)/(5*(16-7)));

    // If we print these values then you should notice somthing is differnt?
    printf("%f\n%f\n",d_eq_1,d_eq_2);

    /*
        C language has thirty two accepted keywords which represent the key
        methods for the c99 standard it follows. 
    
        type Keywords:
        -int -short -double -float -long -char -struct -typedef -void

        Signing
        -signed -unsigned -static -const -enum -union -volitile

        Conditional Keywords:
        -if -else -for -do -while -case -switch -goto -continue -break -return
        
        functional:
        -sizeof -default -auto -extern -register

        You Must Memorize Each of these. Understand what they each do. Learn
        how to use each keyword. These are absolutly vital!

        This part of programming is dry by nature of the topic discussed. Suggest
        choosing five keywords perday for productive learning. Give yourself time.

    */

    // Starting with data structure keywords ("int") is the best place to start.  
    // "int","char","double" are shown above lets explore those further.


    /*
        Syntax : [keyword] [variable_name] = [value];
                    int      val_int       =  42    ;   

        Here we store the numerical value of fourty two
    */
    
    // keyword first followed by var name and value assignment
    int val_int = 42; 
    
    // built in function
    printf("integer: %d \n",val_int);

    /*
        Syntax : [keyword] [variable_name] = [value];
                    char      val_char       =  '4'    ;   

        Here we store the character value of four 
        -Note:  
            '' is used to specify a single character
            and without the compile treats this as the number four
    */
    char val_char = '4'; 
    printf("integer: %c \n",val_char);

    /*
        Syntax : [keyword] [variable_name] = [value];
                    double    val_double       =  42.4    ;   

        Here we also store the numerical value of fourty two
        using "double" instead of "int"

        Now on the surface this may seam insignificant because 
        the values both follow the same syntax pattern

        We are not going to cover this in detail for intrest of time
        and umbrella of knowledge to discuss

        In short, C is heavily reliant upon Memory Managment
        If you do not recognize that term then do not fear it will not
        be overlooked in further discussions

        Below a "double" keyword declares how much memory is 
        reserveed by the compiler. This is subsequently used for storing
        the following value 

        Notice how the output changes from storing "42.4" as integer 
        versus storing value as double 

        This is a good primer to the more advance topic of Memory Managment

        [Lesson Adv: intro_to_memory.c / allocate_ur_fate.c /
            pointers_suck.c / pointers_really_suck.c ]
    */
    val_int = 42.4;
    double val_double = 42.4;    
    printf("integer: %d \n",val_int);
    printf("double: %f \n",val_double);

    /*
    
        We can explore further into these differnt keywords as we cover
        more advance topics. Loops, Arrays, Structures, Pointers and so much more!
    
    */

}
