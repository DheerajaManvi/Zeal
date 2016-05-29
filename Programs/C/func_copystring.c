/* 

Copy one string into another, using functions.

*/

#include<stdio.h>

void readString(char *p) {

  printf("Enter any string : ") ;
  scanf("%s",p) ;  

}


void copyString(char *s, char *d) {

   while ( *d++ = *s++ ) ;
}

main() {

   char src[100], dest[100] ; 

   readString(src) ;
   copyString( src, dest ) ;

   printf ("\n%s", dest ) ;

   printf ("\n\n");

}   

   

   


