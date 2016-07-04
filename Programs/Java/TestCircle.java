

class TestCircle {

   double radius, area, circumference , diameter ;
   String cirName ;
   char c ;


   public TestCircle( int i, int j, int k, int l ) {

      this ( "kljdslksjdfkl" ) ;
      System.out.println ( i + "," + j + "," + k + "," + l ) ;

   }

   public TestCircle() {

      this ( 1,2,3,4 ) ;

      radius = 0 ;
      area   = 0 ;
      circumference = 0 ;
      diameter = 0 ;
      cirName = "CIRCLE" ;

   }

   public TestCircle ( String cirName ) {
      this.cirName = cirName ;

      System.out.println("Yes,I am called") ;
   }

   public TestCircle ( double radius, String cirName ) {

      double r ;
      this.radius = radius ;
      this.cirName = cirName ;

      r = radius ;
      area = 22/7 * r * r ;
      circumference = 2 * 22/7 * r ;
      diameter = 2 * r ; 

   }

   private TestCircle( int ii ) {

      this("Found") ;

   }

   public void TestCircle() {

      cirName = "XYZ" ;

   }

   public TestCircle( char c ) {

      this.c = c ;
     
   }

   public static void main ( String[] args ) {

      TestCircle tc1 = new TestCircle() ;
      TestCircle tc2 = new TestCircle("Dheeraja") ;
      TestCircle tc3 = new TestCircle(2.24, "Good") ;
      TestCircle tc5 = new TestCircle('C') ;

      System.out.println ("================================");
      System.out.println("Name          : " +tc3.cirName ) ;
      System.out.println("Radius        : " +tc3.radius ) ;
      System.out.println("Area          : " +tc3.area ) ;
      System.out.println("Circumference : " +tc3.circumference ) ;
      System.out.println("Diameter      : " +tc3.diameter ) ;
      System.out.println ("================================");

      System.out.println ( tc1.cirName ) ;
      System.out.println ( tc2.cirName ) ;
      System.out.println ("================================");

      TestCircle tc4 = new TestCircle( 111 ) ;
      System.out.println ( tc4.cirName ) ;
      System.out.println( tc5.c ) ;
      

   }


}
