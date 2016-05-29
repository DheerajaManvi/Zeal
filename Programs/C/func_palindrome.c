/*

Palindrome using functions.

*/

#include<stdio.h>
main() {

   int a ;

   printf("Enter any number : " ) ;
   scanf("%d" , &a) ;

   int retval = checkPal(a);

   if ( retval == 0 ) { printf("%d is a palindrome" , a ) ; }
   else { printf("%d is not a palindrome",a ) ; }

   printf("\n\n");

}


int checkPal(int n) {

   int r,tn ;
   r = 0 ;
   tn = n ; 
  
   while( n != 0 ) {
      r = r * 10 + ( n % 10 ) ; 
      n = n / 10 ;
   }

   if ( r == tn ) { return ( 0 ) ; }

   return 1 ; 
}
