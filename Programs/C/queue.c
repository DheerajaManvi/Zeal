/* 

Implementing queues using functions.

*/

#include<stdio.h>

/* Function for reading array */

int readArray( int a[] ) {

   int i , n ;

   printf("Enter number of elements to be entered: ") ;
   scanf("%d",&n) ;

   for( i = 0 ; i < n ; i++ ) {

      printf("Enter the %d element in the queue : ",i + 1) ;
      scanf("%d",&a[i]) ;
   }

   return (n) ;
} 

/* Function for printing array */

void printArray(int a[] , int n) {
   
   int i ;

   printf("Queue : [ ") ;

   for( i = 0 ; i < n ; i++ ) {

      printf("%d",a[i]) ;

      if( i < (n - 1) ) { printf(", ") ; }
   }

   if ( n == 0 ) {
      printf(" EMPTY ") ;
   }

   printf(" ]") ;

}

/* Function for pushing an element */

int pushElement(int a[] , int n) {

   int p ;

   printf("Enter the element to be pushed : ") ;
   scanf("%d",&p ) ;

   a[n] = p ;
   n = n + 1 ;    

   return(n) ;
}

/* Function to pop an element */

int popElement(int a[] , int n) {

   int temp,i ;

   temp = a[0] ;

   for( i = 0 ; i < n ; i++ ) {

      a[i] = a[i+1] ;
   }
  
   n = n - 1 ;
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

   queue() ;

   printf("\n\n") ;

}

queue() {

   int choice ;
   int queue[100], n ;

   n = 0 ;

   do {

      printf ("\n\n");

      printf ("\n\t----------------------");
      printf ("\n\t1  => Queue Entry") ;
      printf ("\n\t2  => Display Queue") ;
      printf ("\n\t3  => Push") ;
      printf ("\n\t4  => Pop") ;
      printf ("\n\t5  => Top") ;
      printf ("\n\t6  => last") ;
      printf ("\n\t7  => Erase all") ;
      printf ("\n\t0  => Exit") ;

      printf ("\n\t----------------------");
      printf ("\n\tEnter Choice: " ) ;
      scanf  ("%d", &choice ) ;
      printf ("\t----------------------");

      printf ("\n\n") ;
   
      if( choice == 1 ) {
   
         n = readArray( queue ) ;
         printArray(queue,n) ;
      }

      if( choice == 2 ) {

         printArray(queue,n) ;

      } 

      if( choice == 3 ) {
    
         n = pushElement(queue,n) ;
         printArray(queue,n) ;
      }

      if ( choice == 4 ) {

         if ( n == 0 ) { 
            printf("Warning : The queue is empty\n") ;
            printArray(queue,n) ;
            continue ;
         }

        n = popElement(queue,n) ;
        printf("Pop element : %d\n" , queue[0]) ;
  
        printArray(queue,n) ;
     }

     if( choice == 5 ) {
   
        int t ;

        if( n == 0 ) { 
        
        printf("Warning : The queue is empty\n") ; 
        printArray(queue,n) ;
        continue ; 
        }

        t = topElement(queue,n) ;
        printf("The top element is : %d\n" , t ) ;

        printArray(queue,n) ;
     }

     if( choice == 6 ) {

        int l ;

        if ( n == 0 ) {

           printf("Warning : The queue is empty\n") ;
           printArray(queue,n) ;
           continue ;
        } 

        l = lastElement(queue,n) ;
        printf("The last element is : %d\n", l) ;

        printArray(queue,n) ; 
     } 

     if( choice == 7 ) {

        n = 0 ;
        printArray(queue,n) ;
     }
       
   }
  
   while( choice != 0 ) ;
}




