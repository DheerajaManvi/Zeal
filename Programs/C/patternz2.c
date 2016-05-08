/*

Print numbers in the following pattern.

            1
          2 2
        3 3 3
      4 4 4 4
    5 5 5 5 5 .....

*/

#include<stdio.h>

main() {

   int i,ci,s,si,s1,si1;

   s = 40;
   si = 1;
   i  = 1;
 
   while (i <= 9) {

      si = 1 ;
      while ( si <= s ) {
         printf (" ");
         si++ ;
      }

      s--;

      ci = 1;

      while (ci <= i) {
         printf("%d",i);
         ci++;
      }

      printf("\n");
      i++;
    }
}



   


