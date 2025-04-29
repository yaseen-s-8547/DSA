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
	int a[100],i,j,c,size;
	printf("enter the no of size");
	scanf("%d",&size);
	printf("enter the elements of the array");
	for(i=0;i<size;i++){
		scanf("%d",&a[i]);
	}
	for(i=0;i<size-1;i++){
		c=1;
		for(j=i+1;j<size;j++){
			if(a[i]==-9999999999)
				continue;
			if(a[i]==a[j]){
				c++;
				a[j]=0;
			}
		}if(c>1){
			printf("\n %d repeated %d times",a[i],c);
		}
	}
	return EXIT_SUCCESS;
}
