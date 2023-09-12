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
float mata [2][2];
float matb [2][2];
float matsum [2][2];
int i,j;
printf("enter the elements of first matrix\r\n");
for (i=0;i<2;i++){
    for (j=0;j<2;j++){
        printf("enter a%d%d :",i+1,j+1);
        fflush(stdin);fflush(stdout);
        scanf("%f",&mata[i][j]);
    }
}
printf("enter the elements of second matrix\r\n");
for (i=0;i<2;i++){
    for (j=0;j<2;j++){
        printf("enter a%d%d :",i+1,j+1);
        fflush(stdin);fflush(stdout);
        scanf("%f",&matb[i][j]);
    }
}
printf("sum of matrix=\r\n");
        fflush(stdin);fflush(stdout);

for (i=0;i<2;i++){
    for (j=0;j<2;j++){
            matsum[i][j]=mata[i][j]+matb[i][j];
        printf("%.2f",matsum[i][j]);
        fflush(stdin);fflush(stdout);
        printf("    ");
    }
    printf("\r\n");
}

    return 0;
}

