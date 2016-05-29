/*

Product of numbers using pointers.

*/

#include<stdio.h>

int productOfNumbers( int n1 , int n2 , int *p ) {

   *p = n1 * n2 ; 
   
} 

main() {

  int n1 , n2 , prod ;

  printf("Enter any two numbers : ") ;
  scanf("%d %d",&n1 , &n2) ;

  printf("n1 = %d , n2 = %d",n1,n2) ;

  productOfNumbers(n1,n2, & prod ) ;

  printf ("\n%d X %d = %d", n1, n2, prod ) ;

  printf ("\n\n");

}
