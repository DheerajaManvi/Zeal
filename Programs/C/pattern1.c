/* 

print 1 to n numbers in a pattern.

*/

#include<stdio.h>
main() {

   int i,n,j;
  
   printf("Enter the number of rows:");
   scanf("%d",&n);

   while( i <= n ) {
      j=1;
      
      while( j <= i) {
         printf("%d",j);
         j = j+1;
      }

      i=i+1;
      printf("\n");
   }
}


      

