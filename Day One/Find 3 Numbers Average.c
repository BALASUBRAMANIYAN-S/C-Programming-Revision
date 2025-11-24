/*
 ============================================================================
 Name        : Find.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	float num1,num2,num3,averge;
	printf("Enter Three numbers:");
	fflush(stdout);
	scanf("%f%f%f",&num1,&num2,&num3);
	averge=(num1+num2+num3)/3;
	printf("Average Of Three Numbers %f",averge);
	return EXIT_SUCCESS;
}
