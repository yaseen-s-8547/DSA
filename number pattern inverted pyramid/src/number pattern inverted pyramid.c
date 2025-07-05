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
	for(row=0;row<=limit;row++){
		for(space=0;space<=row;space++){
			printf(" ");
		}for(number=1;number<=limit-row;number++){
			printf("%d",number);
			if(number<limit){
				printf(" ");
			}

		}printf("\n");
	}
	return EXIT_SUCCESS;
}
