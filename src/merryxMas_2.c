/*

    merryxMas.c

    This is a file to say merry holidays chrimsmtiusnass

*/
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
	// intro co 101
	int size = 7,a=0;
	char astr[8] = {' ',' ',' ',' ',' ',' ',' ','\0'};
	while(size>0){				
		if(size>2){
			char *ptr = astr;
			//printf("%p\n",ptr);
			int i=0,pad_l=3,pad_r=3;
			while(i<8){
				while((pad_l)>0){
					*ptr='Y';
					pad_l--;
					i++;
					//printf("pointer:%p value:%c\n",ptr,*ptr);
					ptr=astr+(sizeof(char)*i);	
				}
				while((a+1)>0){	
					a--;
					i++;
					*ptr='*';
					ptr=astr+(sizeof(char)*i);
					//printf("%p\n",ptr);
				}
				while((pad_r-a)>0){
					pad_r--;
					i++;
					*ptr='X';
					ptr=astr+(sizeof(char)*i);
					//printf("%p\n",ptr);			
				}
					
			i++;
			}
			a+=2;
			printf("%s\n",astr);		
		}else	if(size==2){				
			printf("  | |  \n");
		}else if(size==1){		
			printf(" [___] \n");
		}	
		size--;
	}
}
