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
void main()
{
int n,i;
float avarage;
float sum =0;
printf("Enter the number of data:");
fflush(stdin);fflush(stdout);
scanf("%d",&n);
float sample [n];
for(i=0;i<n;i++){
printf("enter number: ");
fflush(stdin);fflush(stdout);
scanf("%f",&sample[i]);
sum = sum+sample[i];

}
avarage =sum/n;
printf("Average = %f",avarage);
}
