/*

Structure example program.

*/

#include<stdio.h>

struct Book {

   char title[100] ;
   char author[100] ;
   int id ;
   float price ; 
} ;

main() {  

   struct Book b1 ;

   char del ;

   printf("Enter the title for book1 : ") ;
   scanf("%[^\n]s",b1.title) ;

   scanf("%c", &del) ;  

   printf("Enter the author's name : ") ;
   scanf("%[^\n]s",b1.author) ;

   printf("Enter the book id : ") ;
   scanf("%d",&b1.id) ;

   printf("Enter the price : ") ;
   scanf("%f",&b1.price) ;

   printf("\nTitle : %s",b1.title) ;
   printf("\nAuthor : %s",b1.author) ;
   printf("\nId : %d",b1.id) ;
   printf("\nPrice : %.2f",b1.price) ;

   printf("\n\n") ;

}
