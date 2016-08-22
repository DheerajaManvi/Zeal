import java.io.* ;
import java.util.* ;

class FindDuplicates {


   public static void main(String[] args ) {

      String path = "/home/dheeru/Development/github" ;

      File f = new File ( path ) ;

      allFiles ( f ) ;

      System.out.println () ;
   }

   public static void allFiles ( File f ) {

      System.out.println ( "\nDirectory: " + f.getAbsolutePath() + ", Perms: " + getPermissions ( f ) ) ;
 
      for ( File df : f.listFiles() ) {

         if ( df.isDirectory() ) { 
            allFiles ( df ) ; 
         } else {
            System.out.println ( "\n+" + df.getName() ) ;
            System.out.print ( "\tPerms: " + getPermissions (df) ) ;
            System.out.print ( "\tSize : " + df.length() ) ;
            System.out.print ( "\tModified : " + new Date (df.lastModified()) ) ;
            System.out.println () ;
         }

      }

   }

   public static String getPermissions( File df ) {
  
      String permissions = "" ;
  
      if ( df.canRead() )    { permissions += "r" ; } else { permissions += "-" ; }
      if ( df.canWrite() )   { permissions += "w" ; } else { permissions += "-" ; }
      if ( df.canExecute() ) { permissions += "x" ; } else { permissions += "-" ; }

      return permissions ;

   }

}
