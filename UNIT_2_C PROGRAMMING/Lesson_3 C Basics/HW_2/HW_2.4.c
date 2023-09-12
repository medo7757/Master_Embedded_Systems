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
 float x;
 printf("Enter a number:");
 fflush(stdin);fflush(stdout);
 scanf("%f",&x);
if(x==0){
    printf("you entered zero");
}
else if (x>0){
     printf("%f is postive",x);
     }
else{
    printf("%f is negative",x);
}
    return 0;
}
