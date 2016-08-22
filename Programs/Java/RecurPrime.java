
class RecurPrime {

/*
   int prime() {

      int c=0,num = 2,d = 2,q=0 ;

      if ( c == 101 ) { return 1; }  

      //while( d < num ) { 

         if( num % d == 0) { 
            q = 1 ;
         }

         d++ ;
       //}

       if( q == 0 )  { System.out.println( num ) ; c++ ; } 
       num++ ;
       prime() ; 
   }

*/


   boolean checkPrime( int n, int d ) {

      if ( n == 1 ) return false ;
      if ( n == d ) return true ;
      if ( n % d == 0 ) return false ;
      //System.out.println ( "n= " + n + ",d= " + d ) ;
      return checkPrime ( n, ++d ) ; 

   }


   boolean first100 ( int s, int pc, int h ) {

     if ( pc == h ) { return true ; } 

     if ( checkPrime ( s, 2) ) { 
        ++pc ; 
        System.out.print ( s + ", " ) ;
     }

     return first100 ( ++s, pc, h ) ;

   }

   public static void main ( String[] args ) {
      RecurPrime rp = new RecurPrime() ;

      //if ( rp.checkPrime( 27, 2) ) { System.out.println ( "Prime 27" ); } else { System.out.println ( "Not Prime 27" ); }
      //if ( rp.checkPrime( 117, 2) ) { System.out.println ( "Prime 117" ); } else { System.out.println ( "Not Prime 117" ); }

      rp.first100 ( 1, 0, 100 ) ; 

      System.out.println() ;
   }
}
