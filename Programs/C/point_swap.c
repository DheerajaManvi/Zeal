/*

Swap numbers using pointers.

*/

#include<stdio.h>

int swapNumbers( int *p1, int *p2) {
  
   int temp ;

   temp = *p1 ;
   *p1 = *p2 ;
   *p2 = temp ;

   printf("\nFunc : n1 = %d, n2 =%d", *p1,*p2) ;

   return 0 ;  
}

main() {

   int n1 , n2 ;

   printf( "Enter any  two numbers to be swapped : ") ;
   scanf( "%d %d" , &n1,&n2 ) ; 

   printf("\nn1 = %d , n2 = %d ",n1,n2) ;

   swapNumbers(&n1,&n2) ;

   printf("\nn1 = %d , n2 = %d ",n1,n2) ;

   printf("\n\n") ;
}
