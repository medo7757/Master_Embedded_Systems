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
        int r,c,i,j;
        printf("enter rows and columns of matrix:\r\n");
        fflush(stdin);fflush(stdout);
        scanf("%d%d",&r,&c);
        float base_mat[r][c];
        float tran_mat[c][r];
        printf("enter elements of matrix:\r\n");
        fflush(stdin);fflush(stdout);
        for(i=0;i<r;i++){
            for(j=0;j<c;j++){
                printf("enter element a%d%d :",i+1,j+1);
                fflush(stdin);fflush(stdout);
                scanf("%f",&base_mat[i][j]);
            }
        }
        printf("entered matrix :\r\n");
        fflush(stdin);fflush(stdout);
        for(i=0;i<r;i++){
            for(j=0;j<c;j++){
                printf("%f   ",base_mat[i][j]);
                fflush(stdin);fflush(stdout);
           }
           printf("\r\n");

        }
        printf("transpose of matrix =\r\n ");
        for(i=0;i<c;i++){
            for(j=0;j<r;j++){
               tran_mat[i][j]=base_mat[j][i];
            }
        }
        for(i=0;i<c;i++){
            for(j=0;j<r;j++){
                printf("%f   ",tran_mat[i][j]);
                fflush(stdin);fflush(stdout);
           }
              printf("\r\n");

        }
        }
