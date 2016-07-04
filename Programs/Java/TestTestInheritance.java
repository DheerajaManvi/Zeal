/*


*/


class TestTestInheritance extends TestInheritance {

   public static int i = 9 ; 

   public static void print() {

       System.out.println( "ii = " +i ) ;
       i++ ;
   }

   public static void main ( String[] args ) {

       print() ;
       TestInheritance.print() ;
       Inheritance.print() ;
       print() ;
   }
}
