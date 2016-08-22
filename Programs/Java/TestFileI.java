
import java.io.* ;
import java.util.Date ;

class TestFileI {


   public static void main ( String[] args ) {

      File f1 = new File ( "/home/dheeru/Development/github/Zeal/Programs/C " ) ;
      File f2 = new File ( "/home/dheeru/Development/github/Zeal/Programs/Java " ) ;

      if( f1.compareTo(f2) == 0 ) {
         System.out.println("Same files.") ; 
      } else { 
         System.out.println("\nGiven paths are different files.") ;
         System.out.println("-----------------------------------------") ;
      }

      File f3 = new File("/home/dheeru/Development/github/Zeal/Programs/Java/Create.java") ;

      try {
         f3.createNewFile() ;      
      } catch( IOException ioe ) {
         System.out.println( ioe ) ;
      }

      File f4 = new File("Create.java") ;
      long lastModified = f4.lastModified() ;
      Date d = new Date(lastModified) ;

      System.out.println("LAST MODIFIED DATE       : " +d) ; 
      System.out.println("LAST MODIFIED IN SECONDS : " +lastModified) ;
      System.out.println("-----------------------------------------") ;

      File f5 = new File("/home/dheeru/") ;
      File f6 = null ; 

      try {
      f6 = File.createTempFile("Temp",".javatemp",f5) ;
      } catch(IOException ioe) {
         System.out.println( ioe ) ;
      }
      System.out.println("CREATE FILE IN SPECIFIED DIRECTORY : " ) ; 
      System.out.println( f6.getPath() ) ;
      System.out.println("-----------------------------------------") ;

      File f7 = new File("/home/dheeru/Development/github/Zeal/Programs/Java/Create.java") ;

      System.out.println("FILE EXISTANCE : " +f7.exists() ) ;
      System.out.println("-----------------------------------------") ;

      File f8 = new File("/home/dheeru/Development/github/Zeal/Programs/Java/Create.java") ;

      System.out.println( f8.setReadOnly() ) ;
      System.out.println( f8.canWrite() ) ;
      System.out.println("-----------------------------------------") ;

      File f9 = new File("/home/dheeru/Development/github/Zeal/Programs/Java/Create.java") ;
      File f10= new File("/home/dheeru/Development/github/Zeal/Programs/Java/Created.java") ;

      if( f9.renameTo(f10) ) {
         System.out.println("Renamed the file") ;
         System.out.println("-----------------------------------------") ;
      } else {
         System.out.println("Error") ;
      }

      File f11 = new File("/home/dheeru/Development/github/Zeal/Programs/Java/Created.java") ;
      File[] files = files.listFiles() ;

      for( File f : files ) {
         System.out.println( f.getName() ) ;
      }
   }
}
