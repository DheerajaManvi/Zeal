/*

*/

class TestAbstractget extends Abstractget {


   //public void setA( int ai ) { a = ai ; }

   public static void main( String[] args ) {

      Abstractget ag = new TestAbstractget () ;

      ag.setA(12) ;
      System.out.println( ag.getA() ) ;

   }
}



