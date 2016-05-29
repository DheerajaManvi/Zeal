/*

Functions to find largest and smallest 
prime.

*/

#include<stdio.h>

/* Function for reading number of digits. */

int readInt ( char prompt[] ) {

   int d;

   printf("%s", prompt) ;
   scanf("%d", &d ) ;
   
   return (d) ;  
}

/* Function for reading characters */

char readChar ( char prompt[] ) {

   char c ;

   printf("%s", prompt ) ;
   scanf("%c" , &c ) ;

   return (c) ;
} 

/* Function for finding smallest */

int getSmall ( int num ) {


   int i,s = 1 ;

   for( i = 1 ; i < num ; i++ ) {

      s = s * 10 ;
   }
   
   return (s) ;
} 


/* Function for finding largest */

int getLarge( int n ) {

   int i,l = 0 ;

   for( i = 1 ; i <= n ; i++ ) {

      l = l * 10 + 9 ;
   }

   return (l) ;
}

/* Function to check prime */

int checkPrime( int nu ) {

   int d = 2 ;

   while( d < nu ) {

      if( nu % d == 0 ) { return (0) ; }
      d++ ;
   }

   return(1) ;
}

main() {

   int nd,step,l,s,d ;
   int start,end, diff ;
   char c ;

   c = readChar("Enter smallest/largest [ S/L ] : " ) ; 
   nd = readInt ("Enter no of digits : ") ;

   s = getSmall(nd) ; printf("\nSmallest=%d",s);
   l = getLarge(nd) ; printf("\nLargest=%d",l); 

   if( c =='L' || c == 'l' ) { 
 
      step = -1 ; 
      start = l ;
      end = s ;
   } else {

      step = 1 ; 
      start = s ;
      end = l ;
   }

   diff = l - s ;
   int i = 1 ;
   int ts = start ;

   while( i <= diff ) {

      if ( checkPrime(ts) ) { 
         printf ( "\nThe 1st  prime number is : %d ", ts ) ; 
         break ;
      } 

      i++ ; 
      ts = ts + step ;

   }


   printf ("\n\n");
}
