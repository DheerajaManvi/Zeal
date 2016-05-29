/*

Printing prime number using functions.

*/

#include<stdio.h>

main() {

   int i1,i2,p;
   int retval ;

   printf("Enter first number in a range : " ) ;
   scanf("%d",&i1);

   printf("Enter last number in a range : " );
   scanf("%d",&i2);

   for( p = i1 ; p <= i2 ; p++ ) {

      retval = checkPrime(p) ;
         
         if(retval == 0) {
            printf("%d ",p); 
         }
   }

   printf ("\n\n");
}



int checkPrime(int n) {

   int d,q ;
 
   d = 2 ;
   q = 1 ;
   
   while( d < n && q == 1 ) {

      if( n % d == 0 ) { return 1 ; }
      d++ ;
       
   }

   return 0 ;
}
