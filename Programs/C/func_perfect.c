/*

Printing perfect number using functions.

*/

#include<stdio.h>
main() {

   int a,retval ;

   printf("Enter any number: ") ;
   scanf("%d",&a) ;

   retval = checkPer(a) ;

   if (retval == 0) { printf("%d is perfect", a) ; }
   else { printf("%d is not perfect", a) ; } 

   printf("\n\n");

}


int checkPer(int n) {

   int i,sum ;
   sum = 1 ;

   i = 2 ;
   while( i < n ) { 

      if( n % i == 0 ) {
         sum = sum + i ;
      }
      i++ ;  
   }
 
  if( sum == n ) { return (0) ; }
  return 1 ;
}
