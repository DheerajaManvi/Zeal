/*

binary number

*/

#include<stdio.h>
main() {

   long r,n,t, tn ;
   long l = 0 ;
   int i, ii ;


   printf("Enter any number: ");
   scanf("%ld", &n);


   t = n ;
   i = 0 ;

   while ( t != 0 ) {

      r = t % 2; 
      t = t/2;

      /*printf ("%ld",r) ;*/

      tn = 1 ; 
      ii = 1 ;

      while ( ii <= i ) {
  
         tn = tn * 10 ;
         ii++ ;

      }

      tn = tn * r ;
      
      l = l + tn ;
      i++ ;

   }

   printf ("\nBinary for '%ld' is: %ld", n, l ) ; 
   printf ("\n");

} 
