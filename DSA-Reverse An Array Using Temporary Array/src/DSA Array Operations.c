/*
 ============================================================================
 Name        : DSA.c
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
int original[]={10,20,30,40,50,60};
int reversed[4];
int i;
int n=4;
for(i=0;i<n;i++){
	reversed[i]=original[n-1-i];
}
for(i=0;i<n;i++){
	printf("%d ",reversed[i]);
}


	return EXIT_SUCCESS;
}
