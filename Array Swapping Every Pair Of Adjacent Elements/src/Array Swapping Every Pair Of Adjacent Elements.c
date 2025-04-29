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
	int a[100],size,temp,i;
	printf("enter the size of array");
	scanf("%d",&size);
	printf("enter %d elements of the array",size);
	for(i=0;i<size;i++){
	scanf("%d",&a[i]);}
	for(i=0;i<size-1;i+=2){
		temp=a[i];
		a[i]=a[i+1];
	    a[i+1]=temp;
	}
	for(i=0;i<size;i++){
		printf("%d ",a[i]);
	}
	return EXIT_SUCCESS;
}
