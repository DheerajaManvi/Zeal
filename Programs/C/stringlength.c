/* 

Finding the length of a string using functions.

*/

#include<stdio.h>

/* Function for finding length of a string */

int stringLen( char ch[100] ) {

   int len ;

   for( len = 0 ; ch[len] != '\0' ; len++ ) ;

   return (len) ;
}

/* Function for finding string palindrome  */

void checkPal( char ch[100] , int len ) {

   char pal[100];
   int i, p ;

   for( i = 0 ; i < len ; i++ ) {

      pal[i] = ch[len - (i+1)] ;
   } 

   p = 1 ;

   for( i = 0 ; i < len ; i++ ) {
  
      if( pal[i] != ch[i] ) {
      
         p = 0 ;
         break ;
      }
   }

   if( p == 1 ) { printf("\nThe given string is palindrome.") ; }
   else{ printf("\nThe given string is not a palindrome.") ; } 
}

main() {

   printf("\n") ;

   char ch[100] ;
   int n ;

   printf("Enter a string : " ) ;
   scanf("%s" , ch ) ;

   n = stringLen(ch) ; 
   printf("String length : %d",n) ;

   checkPal( ch , n ) ;
   
   printf("\n\n") ;
}
