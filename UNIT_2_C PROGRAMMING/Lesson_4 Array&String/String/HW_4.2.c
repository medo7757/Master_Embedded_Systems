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
char str[1000];
int i;
printf("enter the string:  ");
fflush(stdin);fflush(stdout);
scanf("%s",str);
for(i=0;str[i]!='\0';++i);
printf("length of string: %d",i);
return 0;
}
