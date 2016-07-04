/*

*/


class StaticInstance {

   public int i ;
   public static int j ;

   public void setValue ( int i ) {

      this.i = i ;

   }

   public static void setJ() {

      j = 11 ;
      i = 10 ;
   }

   public void print( String t ) {

      System.out.println ( "This is non-static" ) ;

      print() ;
   
   }

   public static void print() {

      System.out.println ( "This is static - VVVV" ) ;
   }

   public static void main( String[] args ) {

      print( ) ; 

   }
}
