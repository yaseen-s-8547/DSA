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
int is_prime(int num){
    int i;
	if (num<2){
		return 0;}
	for(i=2;i*i<=num;i++){
		if(num%i==0){
		return 0;}
	}return 1;


}
int main(void) {
	setbuf(stdout,NULL);
	int size,choice,a[100],i,sum=0;
	printf("enter size");
	scanf("%d",&size);
	printf("enter the elemnts of thae array");
	for(i=0;i<size;i++){
		scanf("%d",&a[i]);
	}
	printf("1.sum of even numbers\n 2.sum of odd number\n 3.sum of positive number\n 4.sum of negative numbers\n 5.sum of prime numbers");
	scanf("%d",&choice);
	for(i=0;i<size;i++){
	if(choice==1&&a[i]%2==0){
            sum=sum+a[i];
	}else if(choice==2&&a[i]%2!=0){
		sum=sum+a[i];
	}else if(choice==3&&a[i]>0){
		sum=sum+a[i];
	}else if(choice==4&&a[i]<0){
		sum=sum+a[i];
	}else if(choice==5&&is_prime(a[i])){
		sum=sum+a[i];
		}


	}
	printf("%d",sum);
	return EXIT_SUCCESS;
}
