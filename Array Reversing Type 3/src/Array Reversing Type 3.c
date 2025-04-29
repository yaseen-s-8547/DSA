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
		int array[100],i,size,j,temp;
		printf("enter a size");
		scanf("%d",&size);
		printf("enter elements");
		for(i=0;i<size;i++){
			scanf("%d",&array[i]);
		}
		for(i=0,j=size/2-1;i<size/4;i++,j--){
			temp=array[i];
			array[i]=array[j];
			array[j]=temp;
		}
		for(i=0;i<size;i++){
				printf("\n a[%d]=%d",i,array[i]);
			}
	return EXIT_SUCCESS;
}
