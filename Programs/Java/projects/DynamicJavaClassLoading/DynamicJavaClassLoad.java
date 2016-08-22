/*

*/

import java.util.* ;
import java.io.* ;
import java.net.* ;
import java.lang.reflect.* ;
import java.lang.* ; 

class DynamicJavaClassLoad {


   String javaClassPath ;
   ArrayList<String> classFiles = new ArrayList<String>() ;
   boolean filesLoad = false ;
   Scanner sc = new Scanner ( System.in ) ;

   public DynamicJavaClassLoad() {
      javaClassPath = System.getProperty("user.dir") ;
   }

   public DynamicJavaClassLoad( String javaClassPath) {
      this.javaClassPath = javaClassPath ;
   }

   public String getPath() {  
      return javaClassPath ;
   }

   public boolean isPathExists() {

      return new File ( javaClassPath ).exists() ;

      /*
      File f = new File ( javaClassPath ) ;
      if ( f.exists() ) {
         return true ;
      } else {
         return flase ;
      }
      */
   } 

   public String[] getFileList() {

      if ( ! isPathExists() ) { return null ; } 
      
      File f = new File ( javaClassPath ) ;
      return f.list() ;

   }

   public void displayMenu() {

      System.out.println("\n\n\n");

      System.out.println ( "\t=======================================================" ) ;
      System.out.println ( "\t=              JAVA CLASS FILES LIST                  =" ) ;
      System.out.println ( "\t=======================================================" ) ;
      
      Iterator<String> it = classFiles.iterator() ;

      int cnt = 0 ;
      while ( it.hasNext() ) {
         System.out.println ( "\t   " + (++cnt) + ". " + it.next() );
      } 

      System.out.println ( "\t   0. Exit" );
      System.out.println ( "\t=======================================================" ) ;
      System.out.print   ( "\t   Choice: " ) ;

   }

    public void displayClassFiles() {

      Iterator<String> it = classFiles.iterator() ;

      while ( it.hasNext() ) {
         System.out.println ( it.next() );
      } 

   }  

   public void populateClassFiles() {

      if ( filesLoad ) { return ; }

      String[] sa = getFileList() ;
      if ( sa == null ) { return ; }

      for( String s : sa ) {
         if( s.endsWith(".class") ) {
             classFiles.add(s) ;
         }
      } 

      filesLoad = true ;

   } 

   public void display() {

       String[] sa = getFileList() ;

       if ( sa == null ) { return ; }

       System.out.println ( "\n\nFiles:" ) ;
       System.out.println ( "============================================" ) ;

       for( String s : sa ) {
          System.out.println ( "\t" + s ) ;
       } 

       System.out.println ( "============================================" ) ;
       System.out.println ( "\n\n" ) ;
   }

   public int readChoice() {
      return sc.nextInt() ;
   }

   public void classFileMenu(Class cname) {

      System.out.println("\t================================") ;
      System.out.println("\t         "+   cname.getName()) ; 
      System.out.println("\t================================") ;
      System.out.println("\t\t1. List Of Constructors.") ;
      System.out.println("\t\t2. List Of Methods.") ;
      System.out.println("\t\t3. List Of Fields.") ;
      System.out.println("\t\t0. Return/Back.") ;
      System.out.println("\t================================") ;
      System.out.println("Enter a choice : ") ;
      int ret = sc.nextInt() ;

      if ( ret == 0 || ret == -1 ) { return ; }
      processClassFileChoice ( cname, ret ) ;

      
   }


   public void processClassFileChoice(Class cname , int ch) {

      switch ( ch ) {
    
         case 1 : displayConstructorMenu( cname ) ;  break ;
         case 2 : displayMethodsMenu( cname ) ;      break ;
         case 3 : displayFields( cname ) ;           break ;

      }

   }

   public void displayConstructorMenu ( Class cname ) {

     Constructor[] cnst = cname.getDeclaredConstructors() ;
    
     int i = 0 ;
    
     for( Constructor cnstr : cnst  ) {

        Type[] tps = cnstr.getGenericParameterTypes() ;
        System.out.print("\nConstructor : " + cnstr.getName() + "("  ) ;
        for( Type tp : tps ) {
          System.out.print( tp + ", " ) ; 
        }
        System.out.println(" )") ;
     }  
   }

   public void displayMethodsMenu( Class cname ) {

     Method[] meth = cname.getDeclaredMethods() ;

     for( Method meths : meth ) {

        System.out.println("Methods :" + meths.getName() ) ;
     }  
   }

   public void displayFields(Class cname) {

      Field[] fld = cname.getDeclaredFields() ;

      for( Field flds : fld ) {
         System.out.println("Fields :" +flds.getName() ) ; 
      } 
   }

   public void processJavaClassFiles() throws Exception{

      while ( true ) {
         populateClassFiles() ;
         displayMenu() ;
         int c = readChoice() ;
         if ( c == 0 ) { break ; } 
         processChoice( c ) ;
      }
   }

   public void processChoice( int c ) throws Exception{

     if ( ! ( c > 0 && c <= classFiles.size() )  ) {
        System.out.println ("Wran: Invalid choice " + c ) ;
        return ;
     } 

     c-- ;
     System.out.println ("Selected File: " + classFiles.get(c) ) ;

     String tmpStr = classFiles.get(c) ;
     tmpStr = tmpStr.replaceFirst ( "\\.class", "" ) ;

     File file = new File ( javaClassPath ) ;
     URL[] cp = { file.toURI().toURL() } ;
     URLClassLoader urlcl = new URLClassLoader ( cp ) ;
     Class cname = urlcl.loadClass ( tmpStr ) ;
/*     Field[] flds = cname.getDeclaredFields() ;
      for ( Field f : flds ) {
         System.out.println ( "\t" + f.getName() + " : " + f.getType().getName() ) ;
      }
*/
      classFileMenu(cname) ;
   }

   public static void main ( String[] args ) throws Exception{

      Scanner sc = new Scanner ( System.in ) ;
      System.out.print("Enter a path : ") ;
      String s  = sc.nextLine() ;
      
      DynamicJavaClassLoad djcl  = new DynamicJavaClassLoad(s) ;
      djcl.processJavaClassFiles() ;
   }
}
