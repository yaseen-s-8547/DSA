/*
 ============================================================================
 Name        : star.c
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
    int star,limit,row,space;
    printf("enter a limit");
    scanf("%d",&limit);
    for(row=1;row<=limit;row++){
    	for(space=1;space<limit;space++){
    		if(row+space<=limit){
    			printf(" ");
    		}else{printf("*");
    	}printf("\n");
    }
	return EXIT_SUCCESS;

