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

int main()
{
 int x;
 printf("Enter an integer you want to check:");
 fflush(stdin);fflush(stdout);
 scanf("%d",&x);
if(x==0){
    printf("zero is not even or odd");
}
else if(x%2==0){
    printf("%d is even",x);
}
else if(x%2!=0){
    printf("%d is odd",x);
}

    return 0;
}
