/*

    merryxMas.c

    This is a file to say merry holidays chrimsmtiusnass

*/
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#define T_WIDTH 8 
#define TREE_HEIGHT 10



// buffer initializer
char* init_arr(char* star_arr);

// recursive tree decleration
int tree_builder(int height,int row);

int main(void){
	// does nothing telling us nothing
	printf("Merry Christmas!\n");
	printf("        *       \n");
	printf("       ***      \n");
	printf("      *****     \n");
	printf("     *******    \n");
	printf("    *********   \n");
	printf("   ***********  \n");
	printf("       | |      \n");
	printf("      [___]     \n");
	// second week
	printf("   *     \n  ***  \n *****\n  | |  \n [___] \n\n\n\n\n");
	// TODO Delete this crap	
	int tree_height=TREE_HEIGHT,star=1;
	char star_arr[T_WIDTH] = {};
	// Initialize buffer array with white spaces
	init_arr(star_arr);
	/*
			Primary Structure Loop For Tree
			-Iterates from top down
	*/
	while(tree_height>0){				
		char *ptr = star_arr;
		if(tree_height>2){
			//printf("%p\n",ptr);
			int i=0;
			while( i<(T_WIDTH-1) ){
				if( i>=(((T_WIDTH-1)/2)-(star/2)) && i<=(((T_WIDTH-1)/2)+(star/2)) ){
					*ptr='*';
				}
				//itorators
				i++;
				ptr++;
			}
			printf("%s\n",star_arr);		
		}else	if(tree_height==2){				
				int trunk_width=0;
				init_arr(star_arr);
				ptr = &star_arr[(((T_WIDTH-1)/2)-1)]; 
				for(int k=0;k<3;k++){
					if(trunk_width==0 || trunk_width==2){
								*ptr='|';
					}	
					trunk_width++;
					ptr++;
				}
			printf("%s\n",star_arr);
		}else if(tree_height==1){		
				int stand_width=0;
				init_arr(star_arr);
				ptr = &star_arr[(((T_WIDTH-1)/2)-2)]; 
				for(int k=0;k<5;k++){
					if(stand_width==0){
								*ptr='[';
					}else	if(stand_width==4){
								*ptr=']';
					}else {
								*ptr='_';
					}
					stand_width++;
					ptr++;
				}
			printf("%s\n",star_arr);
		}
		star+=2;	
		tree_height--;
	}

		
		tree_builder(6,0);

}

/*
		Init Routine for buffer array
*/
char* init_arr(char* star_arr){
		// init the array with ' '
		int k;
		for(k=0;k<T_WIDTH-1;k++){
			star_arr[k]=' ';
		}
		star_arr[T_WIDTH]='\0';
		return star_arr;
}

/*
				row height (h)		white space (n) per side
				row	h	= 2h				n=h
				Row 3 = 6     3
				Row 2 = 4					2
				Row 1 = 2     1	
				Row 0 = 0					0

							*
						***
					*****	
				RECURSIVE LOOP:
					print (height/2)-1 space 
					print (row*2)-1 stars
					print newline
	
	*/
//TODO RECURSIVE Implementation
int tree_builder(int height,int row){	
							
	// does nothing and means nothing
	int width=(height*2)-1;
	
	for(int k=0;k<width;k++){
		// absolute garbage
		if( k<((height-row)/2)-1 ){
			printf("%c",' ');
		}else if( k<((height-row)*2)-1 ){
			printf("%c",'*');
		}	
	}
	printf("\n");
	row++;
	if(row<height){
		tree_builder(height,row);
	}
	return row;
}










