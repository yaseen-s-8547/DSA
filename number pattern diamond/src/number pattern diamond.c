/*
 ============================================================================
 Name        : number.c
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
	int space,space2,number,number2,row,row2,limit;
	printf("enter a limit");
	scanf("%d",&limit);
	for(row=1;row<=limit;row++){
		for(space=0;space<=limit-row;space++){
			printf(" ");
		}for(number=1;number<=row;number++){
			printf("%d",number);
			if(number<=row){
				printf(" ");
			}
		}printf("\n");}
	for(row2=1;row2<=limit;row++){
		for(space2=0;space2<=row2;space2++){
			printf(" ");}
		for(number2=limit;number2>row2;number2--){
			printf("%d",number2);
			if(number2>row2){
				printf(" ");
			}
		}printf("\n");



	}


	return EXIT_SUCCESS;
}
