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
	int n,i,j,count;
	printf("enter the size of the array");
	scanf("%d",&n);
	int *a = (int *)malloc(n * sizeof(int));
	int *visited = (int *)malloc(n * sizeof(int));
	printf("enter %d elements",n);
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
		visited[i]=0;
	}
	printf("frequency of each elements");
	for(i=0;i<n;i++){
		if(visited[i]==1)
		continue;
		count=1;
		for(j=i+1;j<n;j++){
			if(a[i]==a[j]){
				count++;
				visited[j]=1;
			}
		}
		printf("%d->%d times",a[i],count);
	}
	return EXIT_SUCCESS;
}
