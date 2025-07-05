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
	int row,space,star,limit,row2,space2,star2;
	printf("enter a limit");
	scanf("%d",&limit);
	for(row=1;row<=limit;row++){
		for(space=0;space<=limit-row;space++){
			printf(" ");
		}
		for(star=1;star<=row;star++){
			printf("*");
		}printf("\n");
	}
	return EXIT_SUCCESS;
}
