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
#include <string.h>
int main()
{
char str[100],temp;
int i,j;
printf("enter the string:  ");
fflush(stdin);fflush(stdout);
gets(str);
i=0;
j=strlen(str)-1;
while(i<j){
    temp=str[i];
    str[i]=str[j];
    str[j]=temp;
    i++;
    j--;
}
printf("reverse string is : %s",str);
return 0;
}
