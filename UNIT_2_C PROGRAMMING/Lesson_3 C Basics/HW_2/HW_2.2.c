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
 char chartr;
 printf("Enter an alphabet:");
 fflush(stdin);fflush(stdout);
 scanf("%c",&chartr);
if(chartr==65||chartr==97||chartr==69||chartr==101||chartr==73||chartr==105||chartr==85||chartr==117||chartr==79||chartr==111){
    printf("%c is vowel",chartr);
}
else if ((chartr>=65&&chartr<=90)||(chartr>=97&&chartr<=122)){
     printf("%c is consonsnt",chartr);}
else{
    printf("wrong input");
}
    return 0;
}
