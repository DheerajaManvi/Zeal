/*

Print the patterns.

	1
     2  3  4
  5  6  7  8  9
0 1  2  3  4  5 6
.....................

*/

#include<stdio.h>
main() {

   int s,si,n,i,ci,pi,ri,di;

   printf("Enter the number of rows:");
   scanf("%d",&n);

   s = 40;
   i = 1;
   di = 1;
   pi = 1;

   while ( i <= n) { 

      si = 1;
      while (si <= s ) {
      
         printf(" ");
         si++;
      }
      
      ci = 1;
      while ( ci <= pi) {
   
         if ( di == 10) { di = 0; }
         printf("%d",di);
         ci++;
         di++;
       }

      printf("\n");
      i++;
      pi = pi+2;
      s--;
   }

   printf ("\n\n");
}

















