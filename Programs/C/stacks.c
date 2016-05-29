/* 

Implementing stacks using c program.

*/

#include<stdio.h>

void startStack() ;


int readArray(int array[]) {

   int i,n ;

   printf("\nEnter Size of Stack: ") ;
   scanf("%d",&n) ;

   for( i = 0 ; i < n ; i++ ) {

      printf("Enter %d Stack Element: ",i+1) ;
      scanf("%d", &array[i]) ;
   }

   return ( n ) ;

}

void printArray(int a[], int n) {

   int i ;

   printf("\nStack : [ ") ;
 
   for ( i = 0 ; i < n ; i++ ) {

      printf("%d",a[i]) ;
      
      if( i < n-1 ) { printf(", ") ; }  
   } 

   if ( n == 0 ) { printf (" EMPTY " ) ; }
  
   printf(" ]\n") ; 

}

int push( int a[], int n ) {

   return ( pushElement ( a, n ) ) ;

}

int pushElement( int a[], int n ) {

   int p ;

   printf("\nEnter an number to be pushed : " ) ;
   scanf("%d" , &p) ;

   a[n] = p ;
   n = n + 1 ;

   return (n) ;
} 

int topElement( int a[] , int n ) {

   /* printf("The top element is : %d" , a[0] ) ; */

   return (a[0]) ;

}


int pop (int a[], int n ) {

   return ( popElement ( a, n ) ) ;
}


int popElement( int a[] , int n ) {

   n = n - 1 ; 
   return (a[n]) ;
}

int main() {

/*
   int stack[100], n , p , q;

   n = readArray ( stack ) ;
   printArray(stack,n) ;

   n = pushElement( stack , n) ;
   printArray(stack,n) ; 

   p = topElement( stack , n ) ;

   q = popElement( stack , n );
   printArray(stack,n) ;
*/

   startStack() ;
   printf ("\n\n");

}


void startStack() {

   int choice ;
   int stack[100], n ;

   n = 0 ;

   do {

      printf ("\n\n");

      printf ("\n\t----------------------");
      printf ("\n\t1  => Stack Entry") ;
      printf ("\n\t2  => Display Stack") ;
      printf ("\n\t3  => Push") ;
      printf ("\n\t4  => Pop") ;
      printf ("\n\t5  => Top") ;
      printf ("\n\t6  => Erase all") ;
      printf ("\n\t0  => Exit") ;

      printf ("\n\t----------------------");
      printf ("\n\tEnter Choice: " ) ;
      scanf  ("%d", &choice ) ;
      printf ("\t----------------------");

      printf ("\n\n");

      if ( choice == 1 ) {
         n = readArray ( stack ) ;
         printArray ( stack, n ) ;
      }

      if ( choice == 2 ) {
         printArray ( stack, n ) ;
      }

      if ( choice == 3 ) {
         n = push ( stack, n ) ;
         printArray ( stack, n ) ;
      }

      if ( choice == 4 ) {

         if ( n == 0 ) {
            printf ("\n***Warn: Stack is empty, can not pop an element..." ) ;
            printArray ( stack, n ) ;
            continue ;
         }

         int ele =  pop ( stack, n );
         n--;

         printf ("\nPop Value: %d", ele);
         printArray ( stack, n ) ;
      }

      if( choice == 5 ) {

        int t ;
  
        if ( n== 0 ) {
    
           printf("\n***Warning: Stack is empty" ) ;

           continue ;
        }
       
        t = topElement(stack,n) ; 
        printf("\nTop value: %d " , t) ;
        printArray (stack , n) ;
      }

      if( choice == 7 ) {

         n = 0 ;
         printArray (stack,n) ;
      }  

   } while ( choice != 0 ) ;


}


