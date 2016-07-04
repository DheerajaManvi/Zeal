/*

*/

class NextThreeFive {

   public static int  i = 0 ;
   public static int n3x5 = 0 ;

   public static int next3x5() {

      i++ ;
      n3x5 = 3 * 5 * i ;

      return n3x5 ;

   }

   public static int get3x5() { return n3x5 ; }

   public static void main ( String[] args ) {

       
      System.out.println( next3x5() ) ;
      System.out.println( next3x5() ) ;
      System.out.println( NextThreeFive.get3x5() ) ;
      System.out.println( next3x5() ) ;
      System.out.println( NextThreeFive.get3x5() ) ;
   }  


}
