/*
 ============================================================================
 Name        : Array.c
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
	int a[100]={10,20,30,40,50};
	int size=5,i;
	printf("reverse order is ");
	for(i=size-1;i>=0;i--){
		printf("%d ",a[i]);

	}
	return EXIT_SUCCESS;
}
