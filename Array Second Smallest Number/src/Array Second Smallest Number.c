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
#include <limits.h>
#include <stdlib.h>

int main(void) {
	setbuf(stdout,NULL);
	int size,i,s1,s2,a[100];
	printf("enter the size of the array");
	scanf("%d",&size);
	printf("enter the elements of the array");
	for(i=0;i<size;i++){
		scanf("%d",&a[i]);
	}s1=INT_MAX;
	 s2=INT_MAX;
	 for(i=0;i<size;i++){
		 if(a[i]<s1){
			 s2=s1;
			 s1=a[i];
		 }else if(a[i]>s1 && a[i]<s2){
			 s2=a[i];
		 }
	 }printf("\n first smallest number in the array = %d",s1);
	 printf("\n second  smallest number in the array = %d",s2);
	return EXIT_SUCCESS;
}
