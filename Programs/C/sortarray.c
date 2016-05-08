/*

Printing a sorted array.

*/

#include<stdio.h>
main() {

   int i,idx;
   int n, i1, i2, temp;
   int r[100];
   printf("\n");

   printf("Enter any number: ");
   scanf("%d",&n);

   i = 0; 

   while ( i < n) {

      printf("Enter %d number: ",i+1);
      scanf("%d",&r[i]);
      i++;
   }

   i1 = 0 ;

   while ( i1 < n ) {

      i2 = i1 + 1 ;

      while ( i2 < n ) {

         if ( r[i1] < r[i2] ) {
            temp = r[i1] ;
            r[i1] = r[i2] ;
            r[i2] = temp ;
         }

         i2++;
      } 

      i1++ ;

   }

   printf ("\nSorted List: " ) ;

   i1 = 0 ;
   while ( i1 < n ) {

      printf ("%d,", r[i1] ) ;
      i1++ ;

   }

   printf ("\n");
}

