/*

*/

#include<stdio.h>

main() {

   int s[100],n ;
   int i,in ;
   char c[100] ; 

   in = 0 ;
   i = 0 ;

   printf("\nEnter number of digits : ") ;
   scanf("%d",&n) ;

   for( i = 0 ; i < n ; i++ ) {

      printf("Enter %d number : " , i + 1) ;
      scanf("%d",&s[i]) ;
   }

   for( i = 0 ; i < n ; i++ ) { 

      c[i] = s[i] + '0' ;
   }

   printf("\nString : %s",c) ;

   printf("\n\n") ;

}


