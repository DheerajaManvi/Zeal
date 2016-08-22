import java.util.* ;
import java.util.zip.* ;
import java.io.*;

class ZipExtract {

   ZipInputStream zis = null ; 

   static int strng_count = 0 ;
   static String s ;
   static String[] strng_array = new String[100] ;


   public static void getZipFile() {

      Scanner sc = new Scanner(System.in) ;

      System.out.println("Enter a zip file : " ) ;
      String zname = sc.nextLine() ;

      System.out.println("Enter path : " ) ;
      String path = sc.nextLine() ;

      ZipInputStream zis = null ; 
   
      try {

         zis = new ZipInputStream ( new BufferedInputStream ( new FileInputStream (zname) ) ) ;
         ZipEntry z = null ;

         while ( (z = zis.getNextEntry()) != null ) {

            //System.out.println ( "File :" + z.getName() ) ;
            s = z.getName() ;
            strng_array[strng_count] = s ; 
            strng_count++ ; 
         }

         zis.closeEntry() ;
        } catch ( Exception e ) {

        }
    }

   public static void openFile() {      

      int i ;
      Scanner sc = new Scanner(System.in) ;

      System.out.println( "Enter the number of the file : " ) ;
      i = sc.nextInt() ;

      if( i == 1 ) {

          

      }

      


   }

   public static void main( String[] args ) {

      ZipExtract ze = new ZipExtract() ;

      ze.getZipFile() ;

      int i = 0 ;

      while ( i < strng_count ) {

          System.out.println( i+1 + "."  + strng_array[i] ) ;
          i++ ;
     }

     ze.openFile() ;
   }
}  



