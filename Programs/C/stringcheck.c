/*

Program for checking whether the data in the given array
is same or not.

*/

#include<stdio.h>

main() {

   char s[100],ch[100] ;
   int i, p, len, leng ;

   printf("Enter the first string : ") ;
   scanf("%s",s) ;

   printf("Enter the second string : ") ;
   scanf("%s",ch) ; 

   p = 1 ;

   for ( len = 0 ; s[len] != '\0' ; len++ ) ;
   for ( leng = 0 ; ch[leng] != '\0' ; leng++ ) ; 

   if( leng != len ) { 
      printf("\nstrings are not identical.\n") ; 
      return ;
   }


   for ( i = 0 ; i < len ; i ++ ) {

      if( s[i] != ch[i] ) { p = 0 ; }
   }

   if( p == 1 ) { printf("\nBoth strings are identical.") ; } 
   else { printf("\nstrings are not identical.") ; }

   printf("\n\n") ;
   
} 
