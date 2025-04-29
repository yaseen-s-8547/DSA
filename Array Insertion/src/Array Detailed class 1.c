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
	int array[100],size,i,position,value;
	printf("enter size");
	scanf("%d",&size);
	printf("enter %d elements",size);
	for(i=0;i<size;i++){
		scanf("%d",&array[i]);
	}
	printf("enter the position where you want to insert\n");
	scanf("%d",&position);
	printf("enter the value");
	scanf("%d",&value);
	for(i=size;i>=position;i--){
		array[i]=array[i-1];

	}array[position-1]=value;size++;
	printf("resultant array is\n");
	for(i=0;i<size;i++){
		printf("%d\n",array[i]);
	}


	return EXIT_SUCCESS;
}
