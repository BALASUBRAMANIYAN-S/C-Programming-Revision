/*
 ============================================================================
 Name        : Get.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */
#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int number1, number2, sum;

    printf("Enter two values: ");
    fflush(stdout);

    scanf("%d%d", &number1, &number2);

    sum = number1 + number2;
    printf("You Entered Value: %d\n", sum);

    return EXIT_SUCCESS;
}

