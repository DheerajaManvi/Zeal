/* 

Print the numbers in pattern,

            1
          2 2 2
        3 3 3 3 3
      4 4 4 4 4 4 4
*/

#include<stdio.h>
main() {

   int i,s,si,ri,ci;

   i = 1;
   ri = 1; 
   s = 40;

   while( i <= 9 ) {

     si = 1;
     
      while( si <= s) {
         printf(" ");
         si++;
      }
         
      ci = 1;

      while (ci <= ri) {
            printf("%d",i);
            ci++;
      }

      ri = ri + 2;
      printf("\n");
      i++;
      s--;
   }
}
       
   




 
