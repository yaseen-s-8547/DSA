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
	int limit,row,star;
	printf("enter a limit");
	scanf("%d",&limit);
	for(row=1;row<=limit;row++){
		for(star=0;star<=limit-row;star++){
			printf("*");
		}printf("\n");
	}
	return EXIT_SUCCESS;
}
