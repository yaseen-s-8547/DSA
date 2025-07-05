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
	int row,star,limit;
	printf("enter a limit");
	scanf("%d",&limit);
	for(row=0;row<=limit;row++){
		for(star=0;star<row;star++){
			printf("*");
		}printf("\n");
	}
	return EXIT_SUCCESS;
}
