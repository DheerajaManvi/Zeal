class StaticBlocktest {

   static {
      System.out.println ( "4.Hello this is called Static Block" ) ;
   }
   public static void main1 ( String[] args ) {
      System.out.println ( "3.Hello world" ) ;
   }
   static {
      System.out.println ( "1.Hello this is called Static Block" ) ;
   }


   public void finalize() {

       System.out.println ( "This is not called by JVM not by the program" ) ;

       try { Thread.sleep ( 10 *60 ) ; } catch ( Exception e ) {}

   }

   public static void main2 ( String[] args ) {
      System.out.println ( "3.Hello world" ) ;
   }
   static {
      System.out.println ( "2.Hello this is called Static Block" ) ;
   }

   public static void main3 ( String[] args ) {
      System.out.println ( "3.Hello world" ) ;
   }
   public static void main ( String[] args ) {
      System.out.println ( "3.Hello world" ) ;
      System.gc() ;
   }

   public static void main4 ( String[] args ) {
      System.out.println ( "3.Hello world" ) ;
   }
   public static void main5 ( String[] args ) {
      System.out.println ( "3.Hello world" ) ;
   }
}
