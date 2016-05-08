/*

Find Amicable Numbers upto a given number

*/

#include <stdio.h>

main() {

   int n, i, d, ds, rds ;

   printf ("\nEnter a Number: " ) ;
   scanf ( "%d", &n ) ;

   i = 1 ;

   while ( i <= n ) {

      d = 2 ;
      ds = 1 ;

      while ( d < i ) {
         if ( i % d == 0 ) { ds = ds + d ; }
         d++ ;
      }

      d = 2 ;
      rds = 1 ;
     
      while ( d < ds ) {
         if ( ds % d == 0 ) { rds = rds + d ; }
         d++ ;
      }

      if ( rds == i ) {
         printf ("\n%d and %d are amicable numbers", i, ds ) ;
      }

      i++ ;

   }

   printf ("\n");
}
