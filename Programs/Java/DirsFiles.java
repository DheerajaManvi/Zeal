
import java.io.* ;


class DirsFiles {


   public static void dirsfiles ( String dir ) {

      File f = new File ( dir ) ;
      File[] list = null ;

      if ( !f.exists() ) { return ; }

      if ( f.isDirectory() ) {
         list = f.listFiles() ;
      }

      System.out.println ( "\n\nDir: " + dir ) ;
      for ( File ff : list ) {
         System.out.println ( "\t" + ff.getName() ) ;
      }
 
      for ( File ff : list ) {
        if ( ff.isDirectory() ) { dirsfiles ( ff.getAbsolutePath() ) ; }
      }

   }

   public static void main ( String[] args ) {

      if ( args.length != 1 ) { return ; }

      dirsfiles ( args[0] ) ;

   }
}
