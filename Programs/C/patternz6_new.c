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
   char ch ;

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

      if( i == 1){ ch = '*'; }
      if( i == 2){ ch = '%';}
      if( i == 3){ ch = '+';}
      if( i == 4){ ch = '-';}
      if( i == 5){ ch = '/';}
      if( i == 6){ ch = '=';}
      if( i == 7){ ch = '^';}
      if( i == 8){ ch = '$';}
 
      ci = 1;

      while ( ci <= pi) {
         printf ("%c", ch ) ;
         ci++;
      }

      printf("\n");
      i++;
      pi = pi + 2;
      s--;
   }
   
     printf("\n\n");
}

