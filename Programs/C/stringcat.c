/*

Program for string concatination.

*/

#include<stdio.h>


void stringAdd(char *p , char *q) {


   while ( *p && p++   ) ; 
   while ( *p++ = *q++ ) ;

} 

main() {

   char s[100],t[100] ;

   printf("\nEnter the 1st string : ") ;
   scanf("%s",s) ;

   printf("\nEnter the 2nd string : ") ;
   scanf("%s",t) ;

   stringAdd(s,t) ;

   printf("\n%s", s) ;

   printf("\n\n") ;

}
