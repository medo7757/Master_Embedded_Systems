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
 float a,b,c;
 printf("Enter three numbers:");
 fflush(stdin);fflush(stdout);
 scanf("%f %f %f",&a,&b,&c);
if((a>b)&&(a>c)){
    printf("Largest number is = %f",a);
}
else if ((b>a)&&(b>c)){
     printf("Largest number is = %f",b);
     }
else{
    printf("Largest number is = %f",c);
}
    return 0;
}
