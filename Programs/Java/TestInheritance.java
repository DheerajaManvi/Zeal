/*


*/


class TestInheritance extends Inheritance {

   //public static int i = 10 ;

   public TestInheritance() {

      super() ;

   }

   public static void print () {

      System.out.println ( "New i value: " + i ) ;
      i += 5 ;

   }

   public static void main ( String[] args ) {

      Inheritance in = new TestInheritance() ;

      print() ;

      Inheritance.print() ;
      TestInheritance.print() ;
      Inheritance.print() ;

   }

}
