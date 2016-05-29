/*

 Doing prime number program for the millionth time

*/

#include<stdio.h>
main() {

   int n1,n2,i,p,d ;
 
   printf("Enter first number in a range : " ) ;
   scanf("%d" , &n1 ) ;

   printf("Enter last number in a range : " ) ;
   scanf("%d" , &n2 ) ;

   for( i = n1 ; i <= n2 ; i++ ) {

      p = 1 ;
      d = 2 ;

      while( d < i ) {

         if( i % d == 0 ) { p = 0 ; }
         d++ ;
      } 

      if( p == 1 ) { printf("%d " , i ) ; }

   }

   printf("\n\n") ;
}
