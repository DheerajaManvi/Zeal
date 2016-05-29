/*

Read and display matrix.

*/

#include<stdio.h>

main() {

   int a[10][10], i ,j;
   int r, c;

   printf ("Enter Matrix size[5x5]: " ) ;
   scanf ("%dx%d", &r, &c ) ;

   for( i = 0 ; i < r ; i++ ) {
       for( j = 0 ; j < c ; j++ ) {
           printf("Enter %d, %d number : ", i+1, j + 1) ;
           scanf("%d", &a[i][j]) ; 

       }
   }


   printf ("\nMatrix: \n" );
   for ( i= 0 ; i < r ; i++ ) {
      for ( j = 0 ; j < c ; j++ ) {
         printf ("%-3d ", a[i][j] ) ;

      }
      printf ("\n");
   }
   

   

}
