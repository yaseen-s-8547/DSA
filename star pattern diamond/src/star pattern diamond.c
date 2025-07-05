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
	int space,star,row,limit,row2,space2,star2;
	printf("enter a limit");
	scanf("%d",&limit);
	for(row=1;row<=limit;row++){
		for(space=0;space<=limit-row;space++){
			printf("N");
		}for(star=1;star<=row;star++){
			printf("*");
			if(star<=row){
				printf(" ");
			}
		}printf("\n");

	}for(row2=1;row2<=limit;row2++){
		for(space2=0;space2<=row2;space2++){
			printf("N");}
		for(star2=limit;star2>row2;star2--){
			printf("*");
			if(star2>row2){
				printf(" ");
			}
		}printf("\n");

	}
	return EXIT_SUCCESS;
}
