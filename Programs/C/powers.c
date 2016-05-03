/*

Si.no	^1	^2	^3	^4	^5
1	1	1	1	1	1
2	2	4	8	16	32
3	3	9	27	81	243
4	4	16	64	256	1024
.............
.............
*/

#include <stdio.h>

main() {

   int sino, p, ti,tpi, pi, pwr ;

   printf("\nEnter Si.Nos: " ) ;
   scanf ("%d", &sino ) ;

   printf ("\nEnter Powers: " ) ;
   scanf  ("%d", &p ) ;

   printf("\nSi.No");
   
   ti = 1 ;
   while ( ti <= p ) {
      printf ("\t^%d", ti ) ;
      ti = ti + 1 ;
   }

   ti = 1 ;
   while ( ti <= sino ) {

      printf ("\n%d", ti ) ;
     
      pi = 1 ;
      while ( pi <= p ) {

         pwr = 1 ;

         tpi = 1 ;
         while ( tpi <= pi ) {
            pwr = pwr * ti ;
            tpi = tpi + 1 ;
         }

         printf ("\t%d", pwr ) ;
         pi = pi + 1 ;

      }

      ti = ti + 1 ;
      printf ("\n") ;

   }

   printf ("\n");
}
