/*


*/

class Pythog {


   public static long  a = 0 ; 

   public static long addup() {

      a++;

      long i = a * a ;
      long j = (a+1) * (a+1) ;
      long k = (a+2) * (a+2) ;

      while ( k != ( i + j ) ) {

         a++ ;
         i = a * a ;
         j = (a+1) * (a+1) ;
         k = (a+2) * (a+2) ;
      }     

      return ( a ) ;
      

  }

  public static void main( String[] args ) {

     System.out.println( Pythog.addup() ) ;
     System.out.println( Pythog.addup() ) ;
  }

}


