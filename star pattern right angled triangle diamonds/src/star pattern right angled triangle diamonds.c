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
	int row,row2,space,space2,star,star2,limit;
	printf("enter a limit");
	scanf("%d",&limit);
	for(row=1;row<=limit;row++){
		for(space=0;space<=limit-row;space++){
			printf(" ");
		}for(star=1;star<=row;star++){
			printf("*");
		}printf("\n");
	}for(row2=0;row2<=limit;row2++){
		for(space2=0;space2<=row2;space2++){
			printf("n");
		}for(star2=limit;star2>row2;star2--){
			printf("*");
		}printf("\n");
	}

	return EXIT_SUCCESS;
}
