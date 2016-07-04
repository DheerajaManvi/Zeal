import java.util.Scanner ;

class Prime {


public static void main( String[] args ) {

   Scanner sc = new Scanner ( System.in ) ;

   System.out.print("Enter any value : ") ;
   int n = sc.nextInt() ; 

    int d = 2 ;
    int q = 0 ;

   while( d < n ) {

      if( n % d == 0 ) { q = 1 ; }
      d++ ;
   }   


   if( q == 0 ) {

      System.out.println("The given number is prime." ) ;
   }

   else { 

      System.out.println("Not prime." ) ;
   }

}


}
