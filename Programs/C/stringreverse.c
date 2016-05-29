/*
 
Function for string reverse.

*/

#include<stdio.h>

main() {

   char ch[100], temp ;
   int len, i, p ;

   printf("Enter a string : " ) ;
   scanf("%s" , ch ) ;

   for( len = 0 ; ch[len] != '\0' ; len++ ) ; 
   
   p = 1 ;

   for( i = 0 ; i < len/2 ; i++ ) {

      temp = ch[i] ;
      ch[i] = ch[len - (i+1)] ;
      ch[len-(i+1)] = temp ;
  
      printf("\n%s", ch ) ;

   } 

    printf("\nReverse: %s", ch ) ;
   
   printf("\n\n") ;

} 
