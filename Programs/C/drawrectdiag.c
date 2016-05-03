/*


*/


#include <stdio.h>

main () {

   int r,c,ri,ci, ls, lsi, rs, rsi ;
   
   printf ("\nEnter No of Rows: " ) ;
   scanf  ("%d", &r ) ;

   printf ("\nEnter No of Columns: " ) ;
   scanf  ("%d", &c ) ;

   /* To print first row of the rectangle */
   ci = 1 ;

   while ( ci <= c ) {
      printf ("*") ; 
      ci = ci + 1 ;
   } 

   printf ("\n");

   /* Done First Row */


   ri = 2 ;

   ls = 0 ; /* Left Spaces */

   while ( ri <= (r - 1) ) {

      printf ("*");

      rs = ( c - 3 ) - ls ; /* Right Spaces */

      lsi = 1 ;
      while ( lsi <= ls ) {
         printf (" ");
         lsi = lsi + 1 ;
      }

      printf ("*") ;

      rsi = 1;
      while ( rsi <= rs ) {
         printf (" ");
         rsi = rsi + 1 ;
      } 
      
      printf ("*"); printf ("\n") ;

      ls = ls + 1 ;
      ri = ri + 1 ;

   }

   /* To print last row of the rectangle */

   ci = 1 ;

   while ( ci <= c ) {
      printf ("*") ;
      ci = ci + 1 ;
   }

   printf ("\n");

   /* Done Last Row */


}


