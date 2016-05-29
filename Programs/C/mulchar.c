/*

Printing the names using char arrays.

*/

#include<stdio.h>

main() {

   char ch[5][30] ;
   int i ;
   char del ;

   for( i = 0 ; i < 5 ; i++ ) {

      printf("Enter the %d name : " , i+1) ;
      scanf("%[^\n]s",ch[i]) ;
      scanf("%c",&del) ;
   }

   for( i = 0 ; i < 5 ; i++ ) {

      printf("\n%d. %s",i+1,ch[i]) ;
   }

   printf("\n\n") ; 


}
