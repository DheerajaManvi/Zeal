/*

Print numbers in a pattern.

       1
      121
     12321
    1234321
   123454321
    .....
    ..... 
*/

#include<stdio.h>
main() {

   int i,r,ls, lsi, ri ;

   printf("Enter the number of rows:");
   scanf("%d",&r);

   i = 1 ;

   while ( i <= r ) {
   
      ls = r-i;

      lsi = 1;
      while( lsi <= ls ) {
         printf(" ");
         lsi = lsi + 1 ;
      }

      ri = 1 ;
      while ( ri <= i ) {
         printf ("%d", ri ) ;
         ri = ri + 1 ;
      } 

      ri = i - 1 ;

      while ( ri >= 1 ) {
         printf ("%d", ri ) ;
         ri = ri - 1 ;
      }

      printf ("\n");
      i= i + 1 ;

   }

   printf ("\n") ;

}
            

    
 
