
import java.lang.* ;
import java.io.* ;

class TestFile {

   public static void main ( String[] args ) {

      String s = "Hello" ;

      File java = new File("/usr/bin/java") ; 
      File javac = new File("/usr/bin/javac") ; 


      try {
         File fl = File.createTempFile( "File", ".doc" ) ;
         System.out.println ( fl.getAbsolutePath() ) ;
      } catch (IOException e) {
           System.out.println( e ) ; 
      } 

      System.out.println( "Path separator: " + File.pathSeparator ) ;
      System.out.println( "Separator     : " + File.separator ) ;

      System.out.println( "Parent of /usr/bin/java: " + java.getParent() ) ;
      System.out.println( "Parent of /usr/bin/javac: " + javac.getParent() ) ;
      System.out.println( "is /usr/bin/java execute? " + java.canExecute() ) ; 
      System.out.println( "is /usr/bin/javac execute? " + javac.canExecute() ) ; 

      java = new File ( "../C/a.out" ) ;
      System.out.println( "Parent of " + java.getName() + ": " + java.getParent() ) ;
      System.out.println( "is " + java.getName() + " execute? " + java.canExecute() ) ; 

      File afile = new File("afile") ;
      System.out.println( "Is afile executable : " +afile.canExecute() ) ;
      System.out.println( "Is " + afile.getName() + " read : " +afile.canRead() ) ;
      System.out.println( "Is " + afile.getName() + " write : " +afile.canWrite() ) ;

      File del = new File("ABC") ;
      del.delete() ;

      File exit_del = new File("Square.java") ;
      exit_del.deleteOnExit() ;
   }
}
