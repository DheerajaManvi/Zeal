/*




*/

#include<stdio.h>

/* Function for sum of numbers upto given number */ 

int sigmaN( int n ) {

  int sum , i ;

  sum = 0 ;

  for( i = 1 ; i <= n ; i++ ) {

     sum = sum + i ;
  }
 
  return (sum) ;
}

/* Function for finding sum of odd numbers upto a given number */

int sigmaOdd( int n ) {

   int sumO = 0 , i  ;

   for( i = 1 ; i <= n ; i++ ) {

      if( i % 2 != 0 ) {

         sumO = sumO + i ;
      }
   }
   
  return (sumO) ;
}

/* Function for finding sum of even numbers upto a given number */

int sigmaEven( int n ) {

    int sumE = 0 , i ;

    for( i = 1 ; i <= n ; i++ ) {

       if( i % 2 == 0 ) {

          sumE = sumE + i ;
       }
    }

    return (sumE) ;
}

/* Function for finding divisors */

void divisors( int n , int s ) {

   int d = 1 ;

   while( d < s ) {

      if( s % d == 0 ) {

         printf("%d, ", d ) ; 
      }

      if( d == n ) {

         printf("\n%d is also a divisor" , n ) ;
      }
 
      d++ ;
   }
}


main() {

   int n , s , sO , sE;

   printf("\nEnter a number : " ) ;
   scanf("%d", &n ) ;

   s = sigmaN(n) ;
   printf("Sum of numbers : %d\n",s) ;

   sO = sigmaOdd(n) ;
   printf("Sum of odd numbers : %d \n", sO ) ;

   sE = sigmaEven(n) ;
   printf("Sum of even numbers : %d \n", sE ) ;

   divisors(n, s) ;

   printf("\n\n") ;

}
