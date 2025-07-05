/*
 ============================================================================
 Name        : star.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	setbuf(stdout,NULL);
		int row,space,star,limit;
		printf("enter a limit");
		scanf("%d",&limit);
		for(row=1;row<=limit;row++){

			for(space=0;space<=limit-row;space++){
				printf("n");}

				for(star=1;star<=row;star++){
					printf("*");
					//if(star<row){
						//printf(" ");
					//}
				}printf("\n");





			}


	return EXIT_SUCCESS;
}
