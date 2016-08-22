/*

*/

#include<stdio.h>

main() {

   char s[100] ;
   int i,in ;

   in = 0 ;
   i = 0 ;

   printf("\nEnter any string : ") ;
   scanf("%s",s) ; 

   while( s[i] != '\0' && s[i] >= '0' && s[i] <= '9' && (in = in * 10 + (s[i] - '0')) && ++i )  ;

   printf("\nInteger number : %d",in) ;

   printf("\n\n") ;

}

