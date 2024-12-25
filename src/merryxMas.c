/*

    merryxMas.c

    This is a file to say merry holidays chrimsmtiusnass

kj*/
#include <stdio.h>
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
	printf("   *     \n  ***  \n *****\n  | |  \n [___] \n");
	// TODO
	// intro cs 101
	int size = 7;
	char astr[8] = {' ',' ',' ',' ',' ',' ',' ','\0'};
	while(size>0){				
		if(size>2){
			char *ptr = astr;
			//printf("%p\n",ptr);
			int i=1,pad_l=3,pad_r=3,a=1;
			while(i<8){
					
				if(i<=pad_l){
					*ptr='Y';	
				}else if(i>pad_l+a){
					*ptr='*';
				}else if(i>pad_l+a){	
					*ptr='X';
				}					
				// iterators
				i++;
				ptr++;
			}
			
			printf("%s\n",astr);		
		}else	if(size==2){				
			printf("  | |  \n");
		}else if(size==1){		
			printf(" [___] \n");
		}	
		size--;
	}
}
