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
    int num,i,postion,element;
    printf("enter number of elements");
    scanf("%d",&num);
    int arr_elements[num];
    printf("enter the elements of the array:");
    fflush(stdin);fflush(stdout);
    for(i=0;i<num;i++){
        scanf("%d",&arr_elements[i]);
    }
    printf("enter the element to be inserted ");
    fflush(stdin);fflush(stdout);
    scanf("%d",&element);
    printf("enter the location");
    fflush(stdin);fflush(stdout);
    scanf("%d",&postion);
    for(i=num;i>=postion;i--){
        arr_elements[i]=arr_elements[i-1];
    }
    num++;
    arr_elements[postion-1]=element;
    for(i=0;i<num;i++){
        printf("%d  ",arr_elements[i]);
    }

    return 0;
    }
