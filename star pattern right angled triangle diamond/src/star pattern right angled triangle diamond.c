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
	int star,limit,row,star2,row2;
	printf("enter a limit");
	scanf("%d",&limit);
	for(row=1;row<=limit;row++){
		for(star=1;star<=row;star++){
			printf("*");
		}printf("\n");
	}
	for(row2=1;row2<=limit;row2++){
		for(star2=limit;star2>row2;star2--){
			printf("*");
		}printf("\n");
	}
	return EXIT_SUCCESS;
}
