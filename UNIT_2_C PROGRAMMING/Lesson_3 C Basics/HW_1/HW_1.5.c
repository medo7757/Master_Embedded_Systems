/*
 ============================================================================
 Name        : 1.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>

int main()
{
 char chartr;
 printf("Enter a character :");
 fflush(stdin);fflush(stdout);
 scanf("%c",&chartr);
 printf("Ascii value of %c = %d",chartr,chartr);
    return 0;
}
