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
void convert(int n){
	int a[100],i,r;
	for(i=0;n!=0;i++){
		r=n%2;
		a[i]=r;
		n=n/2;
	}
	for(i=i-1;i>=0;i--){
		printf("%d",a[i]);
	}
}
int main(void) {
	setbuf(stdout,NULL);
	int n;
	printf("enter a number");
	scanf("%d",&n);
	convert(n);

	return EXIT_SUCCESS;
}
