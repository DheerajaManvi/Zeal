/*

Print factorial using pointers.

*/

#include<stdio.h>
#include<stdlib.h>

main() {

   int n,i,*p ;

   p = ( int *) malloc ( sizeof (int) * 1 ) ;

   *p = 1 ;

   printf("\nEnter any number : ") ;
   scanf("%d", &n) ;

   for( i = 1 ; i <= n ; i++ ) {

      *p = *p * i ;
   }

   printf("The factorial is : %d", *p) ;
   printf("\n\n") ;

   free ( p ) ;

}
