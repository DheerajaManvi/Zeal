/*

Print the pattern,

       *
    % % %
  + + + + +
   ----
   ////
   =====
   ^^^^^^

*/

#include<stdio.h>
main() {
 
   int i,s,pi,ci,si;

   i = 1;
   s = 40;
   pi = 1;
   printf("\n\n");

   while( i <= 8 ) {

      si = 1;
     
      while ( si <= s) {

         printf(" ");
         si++;
      }
 
      ci = 1;

      while ( ci <= pi) {

         if( i == 1){ printf("*"); }
         if( i == 2){ printf("%%"); }
         if( i == 3){ printf("+"); }
         if( i == 4){ printf("-"); }
         if( i == 5){ printf("/"); }
         if( i == 6){ printf("="); }
         if( i == 7){ printf("^"); }
         ci++;
      }
      printf("\n");
      i++;
      pi = pi + 2;
      s--;
   }
}

