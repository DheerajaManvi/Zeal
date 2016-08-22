/*

Program for giving discounts on books.

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

   int n,sum ; 

   printf("Enter the number of books : ") ;
   scanf("%d",&n) ;

   char del,del1 ;

   scanf("%c",&del1) ;

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

   float amt1,disc,amt2,t_disc ;
   float t_amt ;

   if( n <= 50 ) {

      amt1 = n * b1.price ;
      printf("\nTotal amount : %f",amt1) ;
   }

   if( n > 50 && n <= 100 ) {

      amt2 = n * b1.price ; 
      disc = ((amt2-(50 * b1.price))*10)/100 ;
      t_amt = amt2 - disc ;
      t_disc = (amt2/t_amt) * 100 ;
      
      printf("\nOriginal amount : %.2f", amt2) ;
      printf("\nDiscount : %.2f",disc) ;
      printf("\nTotal amount : %.2f",t_amt) ;
      printf("\nTotal discount : %.2f",t_disc) ;
   }

   float amt3,disc1,t_disc1 ;
   float t_amt1 ;
   
   if( n > 100 && n <= 200 ) {

     amt3 = n * b1.price ;
     disc1= (amt3*20)/100 ;
     t_amt1 = amt3 - disc1 ;
     t_disc1 = (t_amt1/amt3) * 100 ;

     printf("\nOriginal amount : %.2f",amt3) ;
     printf("\nDiscount : %.2f",disc1) ;
     printf("\nTotal amount : %.2f",t_amt1) ;
     printf("\nTotal discount : %.2f",t_disc1) ;
   } 

   float amt4,disc2 ;
   float t_disc2,t_amt2 ;

   if( n > 200 ) {

      amt4 = n * b1.price ;
      disc2 = (amt4 * 30)/100 ;
      t_disc = (t_amt2/amt4) * 100 ;

      printf("\nOriginal amount : %.2f",amt4) ;
      printf("\nDiscount : %.2f",disc2) ;
      printf("\nTotal amount : %.2f",t_amt2) ;
      printf("\nTotal discount : %.2f",t_disc2) ;
   }

   printf("\n\n") ;
}

