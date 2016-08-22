

class RecurTable {

   int i = 1; 

   void table() {

      int product = 5 * i++ ;    

      if( i == 11 ) { return ;}
      table() ;
      System.out.println( product ) ;

   }

   public static void main( String[] args ) {

      RecurTable rt = new RecurTable() ;
      rt.table() ;
   }
}
