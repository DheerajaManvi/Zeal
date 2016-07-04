/*


*/

class PolyEx {

   public void call() {

      System.out.println("CALL") ;
   }


   public String toString() {

      System.out.println("PRINT") ;
      return "" ;
 
   }


   public void print() {

      System.out.println("PRINT") ;
   }

   public static void main( String[] args ) {

      PolyEx p = new PolyEx() ;

      Object o = p ;
      o.toString() ;


      /*
      o.call() ;
      o.print() ;*/

      //p.call() ;
      //p.print() ;
   }
}
