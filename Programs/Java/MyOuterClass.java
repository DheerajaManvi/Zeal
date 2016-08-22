

class MyOuterClass {

   static String name = "Java" ;
   private String jj = "Java Java" ;
   
   public MyOuterClass() { }
   public MyOuterClass( String jj ) { this.jj = jj ;}

   static class MyInnerClass {

      int i = -111 ;

      public static void print() {
         System.out.println(name) ;
      }
   }


   void testPrint() {
      System.out.println ( "Hey! it Works" ) ;
   }

   void print() {
      System.out.println ( "Hey! it Works -- called from Inner Class Method..." + jj ) ;
   }

   class MyPrivateTest {

      public void print() {
         System.out.println(jj) ;
         testPrint() ;
         MyOuterClass.this.print() ;
      }
      public void callFromInnerClass() {
         System.out.println("Inside inner class") ;
      } 

   }

   public static void main( String[] args ) {

      MyOuterClass moc = new MyOuterClass() ;
      MyInnerClass mic = new MyInnerClass() ;

      //mic.print() ;
      System.out.println( mic.i ) ;
  
      MyOuterClass.MyInnerClass mc1 = new MyOuterClass.MyInnerClass() ;
      mc1.print() ;

      MyOuterClass moc1 = new MyOuterClass( "Super ...Super....neeeeee.....") ;
      MyPrivateTest mpt = moc1.new MyPrivateTest();
      mpt.print() ;
   } 
}
