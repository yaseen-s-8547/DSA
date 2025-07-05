/*
 ============================================================================
 Name        : number.c
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
	int limit,row,number;
	printf("enter a number");
	scanf("%d",&limit);
	for(row=1;row<=limit;row++){
		for(number=1;number<=row;number++){
			printf("%d",row);
		}printf("\n");
	}
	return EXIT_SUCCESS;
}
