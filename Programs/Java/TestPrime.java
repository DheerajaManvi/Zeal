class TestPrime {


   public static void main ( String[] a ) {

      PrimeObject p1 = new PrimeObject ( 71 ) ;
      PrimeObject p2 = new PrimeObject ( 99 ) ;

      System.out.println ( p1 ) ;
      System.out.println ( p2 ) ;
      System.out.println ( p2.checkPrime( 101) ) ;
      System.out.println ( p1.checkPrime( 27 ) ) ;
      
      int[] pms = p2.getPrimesUpto( 100 ) ;

      System.out.println ( pms ) ;

      for ( int i = 0 ; i < p2.getSize(); i++ ) {
         System.out.print ( pms[i] + "," ) ;
      }
      
      System.out.println () ;
   }


}
