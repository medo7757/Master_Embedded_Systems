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
char str[1000],ch;
int i, count=0;
printf("enter the string:  ");
fflush(stdin);fflush(stdout);
gets(str);
printf("enter a char to find frequancy: ");
fflush(stdin);fflush(stdout);
scanf("%c",&ch);
for(i=0;str[i]!='\0';++i){
    if(ch==str[i])++count;
}
printf("frequancy of %c = %d",ch,count);
return 0;
}

