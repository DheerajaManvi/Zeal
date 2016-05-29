/*

Implementing lists using functions.

*/

#include<stdio.h>

/* Function to read an array. */

int readArray( int a[] ) {

   int i , n ;

   printf("Enter any number : ") ;
   scanf("%d",&n) ;

   for( i = 0 ; i < n ; i++ ) {

      printf("Enter %d element : ", i + 1);
      scanf("%d",&a[i]) ;
   }
   
   return(n) ;
} 

/* Function to print array */

void printArray(int a[] , int n) {

   int i ;

   printf("Queue : [ ") ;

   for( i = 0 ; i < n ; i++ ) {

      printf("%d",a[i]) ;

      if( i < (n - 1) ) { printf(", ") ; }
   }

   printf(" ]") ;

}

/* Function to push an element */

int pushElement(int a[] , int n ) {

   int p ;
  
   printf("Enter the element to be pushed : ") ;
   scanf("%d",&p) ;

   a[n] = p ;
   n = n + 1 ;
 
   return (n) ;
}

/* Function t0 display top element */

int topElement(int a[] , int n) {

   return (a[0]) ;

}

/* Function to display last element */

int lastElement(int a[] , int n) {

   return (a[n-1]) ;
}

int main() {

   lists() ;
   printf("\n\n") ;

}

lists() { 

   int list[100], n ,choice;

   n = 0 ;

   do {

      printf ("\n\n");

      printf ("\n\t----------------------");
      printf ("\n\t1  => List Entry") ;
      printf ("\n\t2  => Display list") ;
      printf ("\n\t3  => Push") ;
      printf ("\n\t4  => Top") ;
      printf ("\n\t5  => last") ;
      printf ("\n\t6  => Erase all") ;
      printf ("\n\t0  => Exit") ;

      printf ("\n\t----------------------");
      printf ("\n\tEnter Choice: " ) ;
      scanf  ("%d", &choice ) ;
      printf ("\t----------------------");

      printf ("\n\n") ;

      if( choice == 1 ) {
         n = readArray(list) ;
         printArray(list,n) ;
      }

      if( choice == 2 ) {

         printArray(list,n) ;
      }

      if( choice == 3 ) {

         n = pushElement(list,n) ;
         printArray(list,n) ;
      }

       if( choice == 4 ) {

           int t ;

           if( n == 0 ) {

              printf("Warning : The list  is empty\n") ;
              continue ;
           }

           t = topElement(list,n) ;
           printf("The top element is : %d\n" , t ) ;

           printArray(list,n) ;
       }

       if( choice == 5 ) {

          int l ;

          if ( n == 0 ) {

             printf("Warning : The list is empty\n") ;
             continue ;
          }

          l = lastElement(list,n) ;
          printf("The last element is : %d\n", l) ;

          printArray(list,n) ;
       }

     if( choice == 6 ) {

        n = 0 ;
     
        printArray(list,n) ;

     }

   } while ( choice != 0 ) ;

}






