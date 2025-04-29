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
	int a[100],i,j,size,temp,k;
	printf("enter the size");
	scanf("%d",&size);
	printf("enter the elements");
	for(i=0;i<size;i++){
		scanf("%d",&a[i]);
	}
	printf("enter the number of times of rotation");
	scanf("%d",&k);
    for(j=1;j<=k;j++){
	temp=a[0];
	for(i=0;i<size-1;i++){
		a[i]=a[i+1];

	}//printf("%d\n",a[i]);
	a[i]=temp;
    }for(i=0;i<size;i++){
		printf("%d ",a[i]);
	}





	return EXIT_SUCCESS;
}
