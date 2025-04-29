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
		int a[20],b[20],c[20];
		int i,j=0,k=0,n;
		printf("enter the size of an array");
		scanf("%d",&n);
		printf("enter an array consist of odd numbers and even numbers");
		for(i=0;i<n;i++){
			scanf("%d",&a[i]);
		}for(i=0;i<n;i++){
			if(a[i]>0){
				b[j++]=a[i];
				//j++;
			}else{
				c[k++]=a[i];
				//k++;
			}
		}
		printf("positive number in array: ");
		for(i=0;i<j;i++){
			printf("%d  ",b[i]);

		}printf("negative number  in array: ");
		for(i=0;i<k;i++){
			printf("%d  ",c[i]);
		}
	return EXIT_SUCCESS;
}
