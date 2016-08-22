/*


*/

import java.util.* ;
import java.io.* ;
import java.util.zip.* ;

class MyZip {

   String zipFileName = null ;
   String extractPath = null ;
   int    nooffiles = 0 ;
   static Scanner sc = null ;

   static {
      sc = new Scanner ( System.in ) ;
   }

   public MyZip () { }

   public MyZip ( String zipFileName, String extractPath ) {
      this.zipFileName = zipFileName ;
      this.extractPath = extractPath ;
   }

   public MyZip ( String zipFileName ) {
      this( zipFileName, "." ) ;
   }

   public int getSize() { return nooffiles; }

   public String[] getFiles() throws FileNotFoundException, IOException {

       if ( zipFileName == null ) { return null ; }
       int filesCount = getCount() ;
       nooffiles = filesCount ;
       String[] zipFiles = new String[filesCount+1] ;

       ZipInputStream zis = new ZipInputStream
                            ( new BufferedInputStream
                              ( new FileInputStream
                                ( zipFileName )
                              )
                            ) ;

       ZipEntry ze = null ;

       int fCount = 0 ;
       while (  (ze = zis.getNextEntry()) != null ) {
          zipFiles[fCount] = ze.getName().toString() ;
          fCount++ ;
          zis.closeEntry() ;
       }

       zis.close() ;

       return zipFiles ;

   }

   public boolean extract ( int fileNo ) throws FileNotFoundException, IOException {

      ZipInputStream zis = new ZipInputStream
                            ( new BufferedInputStream
                              ( new FileInputStream
                                ( zipFileName )
                              )
                            ) ;

       ZipEntry ze = null ;

       File fe = new File ( extractPath ) ;
       if ( ! fe.exists() ) { fe.mkdirs() ; }

       int fCount = 0 ;
       boolean fileDone = false ;
       while (  ( (ze = zis.getNextEntry()) != null) && !fileDone ) {

         if ( fCount == fileNo || fileNo == -2 ) {

            String fs = fe.getAbsolutePath() + File.separator + ze.getName() ;
            FileOutputStream fos = new FileOutputStream ( fs ) ;
            int len ;
            byte[] b = new byte[1024] ;

            System.out.print ("\nExtracting: " + fs + "..." ) ;
            while ( (len = zis.read ( b ) ) != -1 ) {
               fos.write ( b, 0, len ) ;
            }
            System.out.println ("done." ) ;

            fos.close() ;
            if ( fileNo != -2 ) { fileDone = true ; }

          }

          fCount++ ;
          zis.closeEntry() ;
       }

       zis.close() ;

       if ( !fileDone && fileNo != -2 ) { return false ; } 

       return true ;
   }


   public int getCount() throws FileNotFoundException, IOException {

       int fCount = 0 ;

       if ( zipFileName == null ) { return 0 ; }

       ZipInputStream zis = new ZipInputStream 
                            ( new BufferedInputStream 
                              ( new FileInputStream 
                                ( zipFileName ) 
                              ) 
                            ) ;

       ZipEntry ze = null ;

       fCount = 0 ;
       while (  (ze = zis.getNextEntry()) != null ) {
          fCount++ ;
          zis.closeEntry() ;
       }

       zis.close() ;
       
       return ( fCount ) ;
   }

   public int readOption() throws FileNotFoundException, IOException {

      String[] files = getFiles() ;
      int count = getSize() ;

      System.out.println ( "\n=============================================" ) ;

      for ( int i = 0; i < count; i++ ) {
         System.out.println ( "\t" + i + ". " + files[i] ) ;
      }
      System.out.println ( "\t-1. Exit" ) ;
      System.out.println ( "=============================================" ) ;
      System.out.print ("\tChoice: " ) ;
      int choice = sc.nextInt() ;

      return choice ;
   }

}
