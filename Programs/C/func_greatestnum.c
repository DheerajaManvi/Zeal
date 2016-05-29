/*

program to print largest number using functions.

*/

#include<stdio.h>

int largestNum( int a[], int n ) {

   int i , max ;
   max = a[0] ;

   for( i = 1 ; i < n ; i++ ) {

       if( max < a[i] ) {

          max = a[i] ;
       }

   }
   return ( max ) ;
} 

main() {

   int i,n,a[100],l ;

   printf("\nEnter a number : ") ;
   scanf("%d" , &n) ;

   for( i = 0 ; i < n ; i++ ) {
   
      printf("enter %d number : " , i+1 ) ;
      scanf("%d",&a[i]) ;
   } 

   l = largestNum(a,n) ;
   printf("\nLargest num : %d",l) ;

   printf("\n\n") ;
}
