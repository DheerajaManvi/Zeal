class DemoAbstract extends Abstraction {

   public DemoAbstract() { 
      System.out.println ( "DemoAbstract Construct....Venu" ) ;
   } 

   public DemoAbstract(int i ) { 
      System.out.println ( "DemoAbstract Construct....Venu" + i ) ;
   } 

   public void toString1() {
   }

   public void demometh() {

      System.out.println("Demo Method string") ;
   }

   public static void main ( String[] args ) {

      DemoAbstract da = new DemoAbstract( 111 ) ;
      //Abstraction a = da ;
      //da.demometh() ;
   }
}
