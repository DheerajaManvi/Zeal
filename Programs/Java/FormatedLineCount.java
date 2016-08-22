import java.io.*;
import java.util.* ;

class FormatedLineCount {

   public static void main ( String[] args ) {

      String s ; 
      int b, line_count = 0, tn = 0, fn = 0 ;
      int fc=0, rsum = 0 ,cc = 0 ;
      FileInputStream fis = null ;
      boolean new_line = false ;
      boolean first = true, firstColumn = true ;

      Scanner sc = new Scanner(System.in) ;
      System.out.print("Enter any file :") ; 
      s = sc.nextLine() ; 

try { 
      fis = new FileInputStream(s) ;  

      while ( ( b = fis.read() ) != -1 ) {

         if ( b >= '0' && b <= '9' ) {
            tn = tn * 10 + ( b - '0' ) ;
            System.out.print ( (char) b ) ;
            continue ;
         }

         cc++ ;

         if ( first ) {

            fn = tn ;
            first = false ;
            tn = 0 ;
            cc = 0 ;
            System.out.print ( (char) b ) ;
            continue ;
         }

         if ( firstColumn ) { 

            fc = tn; 
            if ( b == '\n'  && cc == 1  && fc > 0 ) {
              System.out.println ( "Error: arguments mis-match" ) ;
              System.exit(-1); 
            }
            cc  = 0 ;
            firstColumn = false ; 
            tn = 0 ;
            System.out.print ( (char) b ) ; 
            continue ; 
         }

         if ( b == '\n' ) { 

            if ( fc != cc ) {
               System.out.println("\nThe required numbers are : " +fc) ;
               System.out.println("Available numbers : " +cc ) ;  
               System.exit(-1) ;
            }
            rsum = rsum + tn ;
            System.out.print ( " ==> " + rsum ) ; 
            rsum = 0 ;
            tn = 0 ;
            firstColumn = true ;
            System.out.print ( (char) b ) ;
            continue ;
         } 


         if ( cc > fc ) {

            System.out.println("ERROR - We have more numbers than required...") ;
            System.exit(-1) ; 
         }
         rsum = rsum + tn ;
         tn = 0 ;
         System.out.print ( (char) b ) ;
        
      }
} catch ( Exception e ) { } 

  }
} 
