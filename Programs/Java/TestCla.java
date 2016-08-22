

class TestCla {


   public static void main ( String[] args ) {

     int a = Integer.parseInt( System.getProperty ( "my.timeout") ) ;

     try { Thread.sleep ( a * 1000 ) ; } catch ( Exception e ) { } 

      if ( args.length < 2 ) { System.err.println ( "Error: Arguments missing..." ) ; System.exit ( -1 ) ; }

      System.out.println ( "Size: " + args.length ) ;

      for ( int i = 0 ; i < args.length; i++ ) {

         System.out.println ( "Args[" + i + "]= " + args[i] ) ;

      }

      String name = args[0] ;
      String age  = args[1] ;

      System.out.println ( "Name: " + name + ", Age: " + age ) ;


      for ( int i = 0 ; i < args.length; i++ ) {
         if ( args[i].equals ("-name" ) ) { name = args[i+1] ; }
         if ( args[i].equals ("-age" ) )  { age  = args[i+1] ; }
      }
      
      System.out.println ( "Name: " + name + ", Age: " + age ) ;

      //System.out.println ( System.getProperties() ) ;

      name = System.getProperty ( "my.name" ) ;
      age  = System.getProperty ( "my.age" ) ;
      System.out.println ( "Name: " + name + ", Age: " + age ) ;

   }


}
