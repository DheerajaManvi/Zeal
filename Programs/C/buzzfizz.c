/*

Print buzz and fizz in the place 
of multiples of 5 and 3 and buzzfizz in the place of 
a number which is multiple by both 5,3

*/

#include<stdio.h>

main() {

   int i=1;
   
   while ( i<= 100 ) {
   
      printf("%d", i);

      if ( (i%3 == 0) && (i%5 != 0) ) {
         printf(" - Buzz");
      }

      if ( (i%5 == 0) && (i%3 != 0) ) { 
         printf(" - Fizz");
      }

      if ( (i%3 == 0) && (i%5 == 0) ) {
         printf(" - BuzzFizz");
      }
      printf ("\n");
      i=i+1;
   }

   printf ("\n") ;
}
  
