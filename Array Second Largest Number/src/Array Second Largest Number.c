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
#include <limits.h>
#include <stdlib.h>

int main(void) {
    setbuf(stdout,NULL);
    int i,l1,l2,size,a[100];
    printf("enter the size of the array");
    scanf("%d",&size);
    printf("enter the elements of the array");
    for(i=0;i<size;i++){
    	scanf("%d",&a[i]);
    }
    l1=INT_MIN;
    l2=INT_MIN;
    for(i=0;i<size;i++){
    	if(a[i]>l1){
    		l2=l1;
    		l1=a[i];

    	}else if(a[i]>l2 && a[i]<l1){
    		l2=a[i];
    	}
    }
    printf("\n first largest=%d",l1);
    printf("\n second largest=%d",l2);

	return EXIT_SUCCESS;
}
