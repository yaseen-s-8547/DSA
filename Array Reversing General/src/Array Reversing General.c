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
			int i,limit,start,end,temp;
			printf("enter a limit");
			scanf("%d",&limit);
			printf("enter values");
			for(i=0;i<limit;i++){
				scanf("%d",&a[i]);
	         }
			start=0;
			end=limit-1;
			while(end>start){
				temp=a[start];
				a[start]=a[end];
				a[end]=temp;
				start++;
				end--;

			}
			for(i=0;i<limit;i++){
							printf("%d",a[i]);
				         }


	return EXIT_SUCCESS;
}
