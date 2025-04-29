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
		int a[100];
		int i,limit,k,max,min;
		printf("enter a limit");
		scanf("%d",&limit);
		printf("enter values");
		for(i=0;i<limit;i++){
			scanf("%d",&a[i]);
         }
		min=a[0];
		max=a[0];
		for(k=0;k<limit;k++){

				if(a[k]>max){
					max=a[k];
				}
				if(a[k]<min){
					min=a[k];
				}
			}
		printf("%d %d\n",max,min);
	return EXIT_SUCCESS;
}
