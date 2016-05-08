/*

Printing patterns.

*/

#include<stdio.h>
main() {

   int n,s,i,ri,ci,si,s1,si1;

   s = 40;
   i = 1;

   printf ("\n\n");

   while( i <= 10) {
      
      si = 1;

      while( si <= s) {

         printf(" ");
         si++;
      }

      ri = i;
      ci = 1;

      while( ci <= i ) {

         if( ri == 10) { ri = 0; }
         printf("%d",ri);
         ri++;
         ci++;  
      }

      ci = 1;
      ri--;

      while( ci <= i-1) {
    
         ri--;
         if(ri == -1) { ri = 9; }
         printf("%d",ri);

         ci++;
      } 

      printf("\n");
      s--;
      i++;
   }

   printf ("\n\n");
}
 
