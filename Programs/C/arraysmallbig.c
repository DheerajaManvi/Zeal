/* 

Read two arrays and finding small and large 
numbers respectively.

*/

#include<stdio.h>
int main() {

   int array1[100],array2[100],small[100],big[100] ;
   int n,i ;

   printf("Enter any number : ");
   scanf("%d",&n);

   for ( i = 0 ; i < n ; i++ ) {

      printf("Enter %d element in array1 : ",i+1);
      scanf("%d",&array1[i]);
   }

   for ( i = 0 ; i < n ; i++ ) {

      printf("Enter %d element in array2: ",i+1);
      scanf("%d",&array2[i]);
   }

   for ( i = 0 ; i < n ; i++ ) {

      small[i] = array1[i];

      if ( array2[i] < array1[i] ) { small[i] = array2[i] ; }
   }

   for ( i = 0 ; i < n ; i++ ) {

      big[i] = array1[i];

      if ( array2[i] > array1[i] ) { big[i] = array2[i] ; }
   }

   printf("Array1 : [ ");
   for ( i = 0 ; i < n ; i++ ) {

      printf("%2d",array1[i]) ;
     
      if ( i < n - 1 ) { printf(", "); }
   } 
   printf(" ]\n") ;
  
 
   printf("Array2 : [ ");
   for ( i = 0 ; i < n ; i++ ) {

      printf("%2d",array2[i]) ;
     
      if ( i < n - 1 ) { printf(", "); }
   } 
   printf(" ]\n") ;


   printf("Small  : [ ");
   for ( i = 0 ; i < n ; i++ ) {

      printf("%2d",small[i]) ;
     
      if ( i < n - 1 ) { printf(", "); }
   } 
   printf(" ]\n") ;


   printf("Big    : [ ");
   for ( i = 0 ; i < n ; i++ ) {

      printf("%2d",big[i]) ;
     
      if ( i < n - 1 ) { printf(", "); }
   } 
   printf(" ]") ;

   printf("\n\n") ;   

}
