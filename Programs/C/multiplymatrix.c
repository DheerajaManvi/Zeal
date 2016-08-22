/*

Multiplication of matrices.

*/

#include<stdio.h>

void readMatrix(int r,int c,int a[][100]) {

    int i,j ;

    for( i = 0 ; i < r ; i++ ) {

        for( j = 0 ; j < c ; j++ ) {

            printf("Enter %d,%d number : ", i + 1,j + 1) ;
            scanf("%d",&a[i][j]) ;
        }
     }
} 

void printMatrix(int r,int c,int **a) {

   int i,j ;

   for( i = 0 ; i < r ; i++ ) {

      printf("\n") ;

      for( j = 0 ; j < c ; j++ ) {

         printf("%-3d",a[i][j]) ;
      } 
   } 
}  

main() {

   int a[100][100],b[100][100],rm[100][100],retval ;
   int r, c ;

   printf("Enter the  first matrix size : ") ;
   scanf("%d,%d",&r,&c) ;

   printf("Enter the second matrix size : ") ;
   scanf("%d,%d",&r,&c) ; 

   readMatrix( r,c,a ) ;
   readMatrix( r,c,b ) ;

   printMatrix(r,c,(int **) a) ;
   printMatrix(r,c,(int **) b) ;

   

}
