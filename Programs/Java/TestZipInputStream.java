import java.io.* ;
import java.util.zip.*;
import java.util.*;


class TestZipInputStream {

   public static void main ( String[] args ) {

      ZipInputStream zis = null ;
      String extractTo = "/tmp/testzip" ;
      byte[] b = new byte[1024] ;
      int len ;
      

      /*
      FileInputStream fis    = new FileInputStream("test.zip") ;
      BufferInputStream bis = new BufferInputStream ( fis ) ;
      ZipInputStream zis = new ZipInputStream ( bis ) ;
      */

      try {

         zis = new ZipInputStream ( new BufferedInputStream ( new FileInputStream ( "test.zip" ) ) ) ;
         ZipEntry ze = null ;

         File fe = new File ( extractTo ) ;
         
         if ( ! fe.exists() ) { fe.mkdirs() ; } 

         while ( (ze = zis.getNextEntry()) != null ) {

            System.out.println ( "File: " + ze.getName() ) ;
            System.out.println ( "\tComment: " + ze.getComment() ) ;
            System.out.println ( "\tSize: " + ze.getSize() ) ;
            System.out.println ( "\tSize(compressed): " + ze.getCompressedSize() ) ;
            System.out.println ( "\tCRC: " + ze.getCrc() ) ;
            System.out.println ( "\tTime: " + new Date(ze.getTime()) ) ;

            String fs = fe.getAbsolutePath() + File.separator + ze.getName() ;
            FileOutputStream fos = new FileOutputStream ( fs ) ;

            System.out.print ("\tExtracting: " + fs + "..." ) ;
            while ( (len = zis.read ( b ) ) != -1 ) {
               fos.write ( b, 0, len ) ;
            }
            System.out.println ("done." ) ;

            fos.close() ;
            zis.closeEntry() ;

         }

         zis.close() ;

      } catch ( FileNotFoundException fnfe ) { 
      } catch ( IOException ioe ) {
      } catch ( Exception e ) {
      }
       

   } 


}
