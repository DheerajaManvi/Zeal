/*

printing the numbers using rows and columns

*/

#include<stdio.h>
main() {
 
   int n,r,c,ni;

   printf("Enter any number:");
   scanf("%d",&n);

   r = 1;
   c = 1;
   ni = 1;
 
   while(r <= 4) {

      if (c % 6 == 0) {

         printf("\n");
         r = r + 1;
      }

   if( ni <= n ) {

      printf("%3d",ni);
   }
      ni= ni+1;
      c = c+1;
 
   }
}    

