/*

Function to print sum and average of numbers
given in an array.

*/

#include<stdio.h>

/* Function for finding sum */

int sum(int ar[],int l) {

   int i, sum ;

   sum = 0 ;

   for( i = 0 ; i < l ; i++ ) {

      sum = sum + ar[i] ;
   }

   return (sum) ;
}


/* Function for finding average */

float average( int s, int l) {

   return ( s * 1.0 / l ) ;


}

main() {

   int array[100], n, i, s ;

   printf("\nEnter any number: ") ;
   scanf("%d", &n ) ;

   for( i = 0 ; i < n ; i++ ) {

      printf("Enter %d number : ",i+1) ;
      scanf("%d",&array[i]) ;   
   }

   printf ("\nArray: [ " ) ;

   for( i = 0 ; i < n ; i++ ) {

      printf("%d",array[i]) ;
     
      if( i < (n-1) ) { printf(", ") ; }

   }

   printf (" ]\n" ) ;

   s = sum(array, n) ;
   printf ("\nSum= %d", s ) ;

   float avg = average ( s, n ) ;
   printf ("\nAvg= %f", avg ) ;
   
   printf ("\n\n");
}
