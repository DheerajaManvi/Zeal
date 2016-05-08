/*

Print the numbers in pattern.

           1
         2 2 2 
       3 3 3 3 3 
           .
           .
           .
         2 2 2
           1
*/

#include<stdio.h>
main() {

   int s,ri,pi,si,ci;

   s = 40;
   ri = 1;
   pi = 1;

   printf ("\n\n") ;

   while ( ri <= 9 ) {
   
      si = 1;
      while ( si <= s ) {
     
         printf(" ");
         si++;
      } 
      ci = 1;
      while ( ci <= pi ) {

         printf("%d",ri);
         ci++;
      }

      printf("\n");
      ri++;
      s--;
      pi = pi +  2;
   }   

   ri = 8;
   pi = pi - 4;
   s++;
   s++;

   while ( ri >= 1 ) {

      si = 1;

      while ( si <= s ) {

         printf(" ");
         si++;
      }
      ci = 1;
      while ( ci <= pi ) {
         printf("%d",ri);
         ci++;
      }

      printf("\n");
      ri--;
      s++;
      pi = pi - 2;
   }

   printf ("\n\n") ;

}
