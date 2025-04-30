/*
 ============================================================================
 Name        : DSA-Count.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int arr[] = {10, 21, 4, 45, 66, 93};
	    int n = sizeof(arr) / sizeof(arr[0]);
	    int even = 0, odd = 0;
	    int i;

	    for (i = 0; i < n; i++) {
	        if (arr[i] % 2 == 0)
	            even++;
	        else
	            odd++;
	    }

	    printf("Even: %d\n", even);
	    printf("Odd: %d\n", odd);


	return EXIT_SUCCESS;
}
