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
	int row,coloumn,number=1;
	for(row=1;row<=5;row++){
		for(coloumn=1;coloumn<=row;coloumn++){
			printf("%d",number);
			number++;

		}printf("\n");
	}
	return EXIT_SUCCESS;
}
