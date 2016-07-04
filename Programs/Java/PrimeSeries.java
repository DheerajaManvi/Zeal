import java.util.Scanner ;

class PrimeSeries {

public static void main( String[] args ) {

   Scanner sc = new Scanner(System.in) ;

   System.out.print("Enter any value : ") ;
   int n = sc.nextInt() ;

   int d = 2 ;
   int q = 0 ;
   int i = 2 ;

   while( i <= n ) {

      while( d < i ) {

         if( i % d == 0 ) { 
         q = 1 ; 
         d++ ;
         }
       }

   if( q == 0 ) { 
     System.out.println( +i ) ;
   }

   i++ ;

   }
}
}
