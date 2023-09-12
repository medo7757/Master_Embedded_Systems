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
 int x,y,factoric=1;
 printf("Enter an integer:");
 fflush(stdin);fflush(stdout);
 scanf("%d",&y);
 if(y==0){
    printf("factorial of %d = 1",y);
}
else if (y>0){
    for(x=1;x<=y;x++){
    factoric=factoric*x;
}
printf("factorial = %d",factoric);
     }
else if (y<0){
    printf("Error !!! factorial of negative number doesnt exist");
}

    return 0;
}
