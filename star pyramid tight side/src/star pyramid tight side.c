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
	int star,space,coloumn,limit;
	printf("enter a number");
	scanf("%d",&limit);
	for(coloumn=1;coloumn<=limit;coloumn++){
		for(space=0;space<=coloumn;space++){
			printf("n");
			}
		for(star=limit;star>coloumn-1;star--){
			printf("*");

		}printf("\n");
	}

	return EXIT_SUCCESS;
}
