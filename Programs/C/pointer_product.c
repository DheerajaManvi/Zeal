/*

Multiply elements of two arrays using 
pointers.

*/

#include<stdio.h>

main() {

   int a[100],b[100],c[100],*p,*q,*r,i,n ;

   p = a ;
   q = b ;
   r = c ;

   printf("\nEnter the number of elements : ") ;
   scanf("%d",&n) ;

   printf("\n") ;

   for( i = 0 ; i < n ; i++ ) {

      printf("Enter the %d element in array A : ", i + 1) ;
      scanf("%d",p+i) ;
   }

  printf("\n") ;

  for( i = 0 ; i < n ; i++ ) {

      printf("Enter the %d element in array B : ", i + 1) ;
      scanf("%d",q+i) ; 
  }

  printf("\nArray A : [ ") ;

  for( i = 0 ; i < n ; i++ ) {

     printf("%d",*(p + i)) ;
    
     if( i < (n - 1) ) { printf(", ") ; }
  }   

   printf(" ]") ;

   printf("\nArray B : [ ") ;

   for( i = 0 ; i < n ; i++ ) {

     printf("%d",*(q + i)) ;
    
     if( i < (n - 1) ) { printf(", ") ; }
   }   

   printf(" ]") ;

   for( i = 0 ; i < n ; i++ ) {

      *(r + i) = *(p + i) *  *(q + i) ;
   } 

    printf("\nProduct Array : [ ") ;

    for( i = 0 ; i < n ; i++ ) {

      printf("%d",*(r + i)) ;
   
      if( i < (n - 1) ) { printf(", ") ; }
    }

   printf(" ]") ;
 
   printf("\n\n") ;
}
