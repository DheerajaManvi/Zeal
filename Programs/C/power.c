/* 

Printing highest power which is less than given number.
Lowest power which is just greater than given number.

*/

#include<stdio.h>

main() {

   int n1,n2,n,c ;

   printf("\nEnter any number : ") ;
   scanf("%d",&n1) ;

   printf("\nEnter the power number : ") ;
   scanf("%d",&n2) ;

   c = 0 ;
   n = 1 ;

   while( n < n1) {

      c++ ;
      n = n * n2 ;
   }

   printf("\nLowest power : %d\nNumber : %d ,which is greater than given number" , c,n) ;

   c = c - 1 ;
   n = n/n2 ;

   printf("\nLargest power :  %d\nNumber : %d ,which is less than given number" , c,n) ;

   printf("\n\n") ;
}
