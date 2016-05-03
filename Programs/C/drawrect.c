/*


*/


#include <stdio.h>

main () {

   int r,c,ri,ci ;
   
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

   while ( ri <= (r - 1) ) {

      printf ("*");

      ci = 2 ;
      while ( ci <= (c-1) ) {
         printf (" ") ;
         ci = ci + 1 ;
      }
      printf ("*"); printf ("\n") ;

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


