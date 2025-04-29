/*
 ============================================================================
 Name        : array.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int array[100]={10,20,60,30,40};
	int size=5,position=2,i;
	for(i=position-1;i<size-1;i++){
		array[i]=array[i+1];
	}size--;
	for(i=0;i<size;i++){
		printf("%d ",array[i]);
	}
	return EXIT_SUCCESS;
}
