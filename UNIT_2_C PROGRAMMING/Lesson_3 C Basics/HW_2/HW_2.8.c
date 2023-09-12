/*
 ============================================================================
 Name        : 1.c
 Author      : MOHAMED GAMAL
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
int main()
{
 char x;
 float a,b,result;
 printf("Enter operator either + or - or * or /:");
 fflush(stdin);fflush(stdout);
 scanf("%c",&x);
 printf("enter two operands :");
 fflush(stdin);fflush(stdout);
 scanf("%f %f",&a,&b);
 switch (x){
case (42):
     printf("%f * %f = %f",a,b,result=a*b);
     break;
case (43):
     printf("%f + %f = %f",a,b,result=a+b);
     break;
case (45):
     printf("%f - %f = %f",a,b,result=a-b);
     break;
case (47):
     printf("%f / %f = %f",a,b,result=a/b);
     break;
 }

    return 0;
}
