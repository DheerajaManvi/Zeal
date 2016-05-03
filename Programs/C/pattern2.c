/*

Print the numbers in the pattern of
right angled triangle.

*/

#include<stdio.h>
main() {

   int i,j,n;
   printf("Enter the number of rows:");
   scanf("%d",&n);
   
   i=1;

   while( i<=n ) {
      j =i ;

      while( j<=i ) {

         printf( "%d", j);
         j=j+1;
      }

       i=i+1;
       printf("\n");
   }

}
