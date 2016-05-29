/*

Program to display all the words in the given
string.

*/


#include<stdio.h>

main() {

   char ch[100],s[100],*p,*q ;

   int i ;

   p = ch ;
   q = s ;  

   printf("Enter any string : ") ;
   scanf("%[^\n]s",p) ;

   while( *p != '\0' ) {

      if( *p != ' ' ) {

        *q = *p ;
         q++ ; 
      } 

      if( *p == ' ') {

         *q = '\0' ;
          q = s ;
          
          printf("\nWord = %s",q) ;
      }

      p++ ;
   }

   *q = '\0' ;

    q = s ;
  
    printf("\nWord = %s",q) ;

    printf("\n\n") ;
}

