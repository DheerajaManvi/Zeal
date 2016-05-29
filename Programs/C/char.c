#include<stdio.h>

main() {


   char ch[5] = "DingRHniDong" ; 

   printf("\n%s",ch) ;

   ch[3] = 'G' ;
   printf("\n%s",ch) ;

   ch[102] = 'G' ;
   printf("\n%s",ch) ;

   printf("\n\n");

   readInt ( 1, "Enter something without fail, pl ensure you provide integer only: ", 2 ) ;

   printf("\n\n");

}


int readInt ( int i, char prmt[1], int j ) {

   printf ("%s", prmt ) ;

}
