/*

Adding the numbers in two arrays using
pointers.

*/

#include<stdio.h>

main() {

   int a[100],b[100],c[100],*p,*q,*r,n,i ;

   p = a ;
   q = b ;
   r = c ;

   printf("Enter the number of elements : ") ; 
   scanf("%d",&n) ;

   printf("\n") ;

   for( i = 0 ; i < n ; i++ ) {

      printf("Enter the %d element for array A: ",i + 1) ;
      scanf("%d",(p + i)) ;
   }

   printf("\n") ;

   for( i = 0 ; i < n ; i++ ) {

      printf("Enter the %d element for array B: ",i + 1) ;
      scanf("%d",(q + i)) ;
   }


   printf("\nA : [ ") ;
   for( i = 0 ; i < n ; i++ ) {
      printf("%d",*(p + i)) ;
      if( i < (n - 1) ) { printf(", ") ; }
   }
   printf(" ]") ;


   printf("\nB : [ ") ;
   for( i = 0 ; i < n ; i++ ) {

      printf("%d",*(q + i)) ;
   
      if( i < (n - 1) ) { printf(", ") ; }
   }
   printf(" ]") ;


   for( i = 0 ; i < n ; i++ ) {

      *(r + i) = *(p + i) + *(q + i) ; 
   }
   printf("\nSUM : [ ") ;
   for( i = 0 ; i < n ; i++ ) {

      printf("%d",*(r + i)) ;

      if( i < (n - 1) ) { printf(", ") ; }
   }
   printf(" ]") ;

   printf("\n\n") ;
} 
