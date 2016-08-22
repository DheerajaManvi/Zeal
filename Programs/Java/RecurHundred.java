


class RecurHundred {

   void printHundred( int s, int e ) {

     if( s > e ) { return ; }

     else { 
        System.out.println( s ) ;
        ++s ;
     }

     printHundred(s,e) ;
   }

   void printNewHundred( int n ) {

      int t = n ;
      if( n == 0 ) { return ; }
      
      printNewHundred(--n) ;
      System.out.println( t ) ;
      
   }

   public static void main( String[] args) {

      RecurHundred rh = new RecurHundred() ;
      //rh.printHundred(1,100) ;
      rh.printNewHundred(10) ;
   }
}
