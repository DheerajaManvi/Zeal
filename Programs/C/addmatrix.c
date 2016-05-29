/*

Adding matrixes.

*/

#include<stdio.h>

main() {

   int a[10][10],b[10][10],ch[10][10] ;
   int i,j ;
   int r,c ;

   printf("Enter the first matrix size : ") ;
   scanf("%d,%d", &r,&c) ;

   printf("Enter the second matrix size : ") ;
   scanf("%d,%d", &r,&c) ;


   for( i = 0 ; i < r ; i++ ) {

      for( j = 0 ; j < c ; j++ ) {

         printf("Enter %d,%d number for matrix [1] : ",i+1,j+1) ;
         scanf("%d",&a[i][j]) ;
      }
   }

   for( i = 0 ; i < r ; i++ ) {

      for( j = 0 ; j < c ; j++ ) {

         printf("Enter %d,%d number for matrix [2] : ",i+1,j+1) ;
         scanf("%d",&b[i][j]) ;
      }
   }

   for( i = 0 ; i < r ; i++ ) {

      for( j = 0 ; j < c ; j++ ) {

         ch[i][j] = a[i][j] + b[i][j] ;
      }
   }

    printf("\nMatrix [1] :\n " ) ;

    for( i = 0 ; i < r ; i++ ) {

        printf("\n") ;

      for( j = 0 ; j < c ; j++ ) {

         printf("%-3d",a[i][j]) ;
      }
   }
    printf("\nMatrix [2] :\n " ) ;
  
    for( i = 0 ; i < r ; i++ ) {

       printf("\n") ;

      for( j = 0 ; j < c ; j++ ) {

         printf("%-3d",b[i][j]) ;
      }
   }

   printf("\nResult Matrix :\n " ) ;
 
    for( i = 0 ; i < r ; i++ ) {

       printf("\n") ;

      for( j = 0 ; j < c ; j++ ) {

         printf("%-3d",ch[i][j]) ;
      }
   }

   printf("\n\n") ;

}
