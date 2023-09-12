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
 float a,b,pos;
 printf("Enter value of A :");
 fflush(stdin);fflush(stdout);
 scanf("%f",&a);
 printf("Enter value of B :");
 fflush(stdin);fflush(stdout);
 scanf("%f",&b);
 pos=a;
 a=b;
 b=pos;
 printf("After swaping value of A = %f\r\n",a);
 printf("After swaping value of B = %f",b);

    return 0;
}
