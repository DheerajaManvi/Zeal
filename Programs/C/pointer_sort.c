/*

Sorting the numbers in the array using pointers.

(small to big)

*/

#include<stdio.h>

main() {

   int a[100],*p,n,i,min,j ;

   p = a ;

   printf("Enter the number of elements to be sorted : ") ;
   scanf("%d",&n) ;

   for( i = 0 ; i < n ; i++ ) {

      printf("Enter the %d number : ",i + 1);
      scanf("%d",(p + i)) ;
   } 

   printf("\nArray A : [ ") ;

   for( i = 0 ; i < n ; i++ ) {

      printf("%d",*(p + i)) ;

      if( i < (n - 1) ) { printf(", ") ; }
   }

   printf(" ]") ;

   for( i = 0 ; i < n ; i++ ) {

      for( j = i + 1 ; j < n ; j++ ) {

      if( *(p + i) > *(p + j) ) {

         min =  *(p + i) ; 
         *(p + i) = *(p + j) ;
         *(p + j) = min ; 
      } 
      }
   }

   printf("\nSorted Array : [ ") ;

   for( j = 0 ; j < n ; j++ ) {
      
      printf("%d",*(p + j)) ;
      if( j < (n - 1) ) { printf(", ") ; }
   }

   printf(" ]") ; 
   printf("\n\n") ;
}
