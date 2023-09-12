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
 printf("Enter a character:");
 fflush(stdin);fflush(stdout);
 scanf("%c",&x);
if(x>255){
    printf("wrong input");
}
else if ((x>65&&x<90)||(x>97&&x<122)){
    printf("%c is an alphabet",x);
     }
else{
    printf("%c is not alphabet",x);
}
    return 0;
}
