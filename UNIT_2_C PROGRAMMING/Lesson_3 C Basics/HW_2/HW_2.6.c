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
 int x,y,sum=0;
 printf("Enter an integer:");
 fflush(stdin);fflush(stdout);
 scanf("%d",&y);
for(x=1;x<=y;x++){
    sum=sum+x;
}
printf("sum = %d",sum);
    return 0;
}
