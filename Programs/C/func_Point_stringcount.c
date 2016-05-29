/*

Program for string count using functions
and pointer.

*/

#include<stdio.h>


void readString(char *p) {

   printf("Enter any string : ") ;
   scanf("%s" , p) ;
} 

int stringCount(char *p) {

    int i = 0 ; 

    while ( *(p + i++) ) ;
    return ( --i ) ;
}

main() {

   char ch[100] ;
   int x ;

   readString(ch) ;
   x = stringCount(ch) ;

   printf("%d" , x) ;

   printf("\n\n") ;
}

