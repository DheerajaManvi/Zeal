/*

Printing array of numbers and their squares using
pointers.

*/

#include<stdio.h>

main() {

   int n,a[100],*p,i ;

   p = a ;

   printf("\nEnter any number : ") ;
   scanf("%d", &n ) ;

   for( i = 0 ; i < n ; i++ ) {

      printf("Enter the %d number : ", i + 1) ;
      scanf("%d", (p + i)) ;
   }

   printf("Array : [ ") ;
   
   for( i = 0 ; i < n ; i++ ) {

      printf("%d",*(p+i)) ;
      
      if( i < n-1 ) { printf(", ") ; }
   }

   printf(" ]") ;

   for( i = 0 ; i < n ; i++ ) {

      *(p + i) = *(p + i) * *(p + i) ;
   }

   printf("\nSquare : [ ") ;

   for( i = 0 ; i < n ; i++ ) {

      printf("%d",*(p+i)) ;

      if( i < n-1 ) { printf(", ") ; }
   }

   printf(" ]") ;

   
   printf("\n\n") ;
} 
