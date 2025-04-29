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
	int a[100],i,size,temp,num1,num2;
	printf("enter size of the array");
	scanf("%d",&size);
	printf("enter %d elements in array",size);
	for(i=0;i<size;i++){
		scanf("%d",&a[i]);
	}printf("enter two position to swap");
	scanf("%d %d",&num1,&num2);
	 temp=*(a+num1);
	 *(a+num1)=*(a+num2);
	 *(a+num2)=temp;
	 printf("swapped array:  ");
	 for(i=0;i<size;i++){
		 printf("%d ",a[i]);
	 }

	return EXIT_SUCCESS;
}
