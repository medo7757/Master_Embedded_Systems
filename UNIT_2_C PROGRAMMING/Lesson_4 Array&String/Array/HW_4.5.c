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
    int num,i,element;
    printf("enter number of elements");
    scanf("%d",&num);
    int arr_elements[num];
    printf("enter the elements of the array:");
    fflush(stdin);fflush(stdout);
    for(i=0;i<num;i++){
        scanf("%d",&arr_elements[i]);
    }
    printf("enter the element to be searched");
    fflush(stdin);fflush(stdout);
    scanf("%d",&element);
    i=0;
    while(i<num&&element!=arr_elements[i]){
        i++;
    }
    if (i<num){
        printf("number found at the location =%d",i+1);
    }
    else{
        printf("number not found");
    }

    return 0;
    }

