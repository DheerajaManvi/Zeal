/*

Printing perferct numbers using pointers.

*/

#include<stdio.h>

main() {

   int n,i,d,*sum ;

   printf("Enter any number : ") ;
   scanf("%d",&n) ;

   for( i = 1 ; i <= n ; i++ ) {
  
      d = 2 ;
      *sum = 0 ;

      while( d < i ) {

      if( i % d == 0 ) {

         *sum = *sum + d ;
      }

         d++ ;
      }

      if ( i == *sum ) {

         printf("%d", i ) ;
      }
   }

   printf("\n\n") ;

}

