import java.util.* ;

class StringDone {

   public static void main( String[] args ) {

      String s ; 
      String[] strArray = new String[100] ;
      int strCount = 0 ;

      Scanner sc = new Scanner(System.in) ;

      System.out.print("Enter String : ") ;
      s = sc.nextLine() ; 

      while ( ! s.equalsIgnoreCase ("Done") ) {
    
          strArray[strCount] = s ;
          strCount++ ;

          System.out.print("Enter String : " ) ;
          s = sc.nextLine() ;
      } 

      int i = 0 ;
      while ( i < strCount ) {
         System.out.println ( (i+1) + ". " + strArray[i] ) ;
         i++ ;
      }
   }
}
