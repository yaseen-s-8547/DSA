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
	int number,space,row,limit;
	printf("enter a limit");
	scanf("%d",&limit);
	for(row=1;row<=limit;row++){
		for(space=0;space<=limit-row;space++){
			printf("n");
		}for(number=1;number<=row;nummber++){
			printf("%d",number);
			if(number<row){
				printf(" ");
			}
		}printf("/n");
	}
	return EXIT_SUCCESS;
}
