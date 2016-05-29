/*

program for  arithmetic operations using pointers.

*/

#include<stdio.h>

int arthOperations(int n1 , int n2 , int *r , int *q , int *s, int *sub, int *pow) {

    int i ;
 
    *r = n1 % n2 ;
  
    *q = n1 / n2 ;

    *s = n1 + n2 ;
 
    *sub = n1 - n2 ; 

    *pow = 1 ;

    for ( i = 1; i <= n2 ; i++ ) {
       *pow = *pow * n1 ;
    }

} 


main() {

   int n1, n2, rem, quo, sum, sub, pow ;

   printf("Enter any two numbers : " ) ;
   scanf("%d %d", &n1, &n2 ) ;

   arthOperations(n1,n2,&rem,&quo,&sum,&sub, &pow) ;

   printf("\n%d %%  %d = %d" , n1, n2, rem) ;

   printf("\n%d / %d = %d" , n1, n2, quo) ;
  
   printf("\n%d + %d = %d" , n1, n2, sum) ;

   printf("\n%d - %d = %d" , n1, n2, sub) ;

   printf("\n%d ^ %d = %d" , n1, n2, pow) ;

   printf("\n\n") ; 
}
