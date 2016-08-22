import java.lang.reflect.* ;

class TestClassName {

   public static void main ( String[] argssd)  throws Exception {

      Class cname = Class.forName ( "DynamicJavaClassLoad" ) ;
      //Class cname = Class.forName ( "java.lang.String" ) ;
      System.out.println ( cname ) ;

      Field[] flds = cname.getDeclaredFields() ;
      System.out.println ( "\nFields: " ) ;
      for ( Field f : flds ) {
         System.out.println ( "\t" + f.getName() + " : " + f.getType().getName() ) ;
      }
      System.out.println() ;

      Constructor<?>[] cnts = cname.getConstructors() ;

      for ( Constructor cnt: cnts  ) {

         System.out.println ( "\n\nConstructor Name: " + cnt.getName() ) ;

         System.out.print ( "\tArguments: " ) ;
         Type[] types = cnt.getGenericParameterTypes() ;
         for ( Type t : types ) {
            System.out.print ( t + "," ) ;
         }
         System.out.println() ;

      }


      Method[] mths = cname.getDeclaredMethods() ;

      for ( Method mth : mths ) {

         System.out.println ( "\n\nMethod Name: " + mth.getName() ) ;

         System.out.print ( "\tArguments: " ) ;
         Type[] types = mth.getGenericParameterTypes() ;
         for ( Type t : types ) {
            System.out.print ( t + "," ) ; 
         }        
         System.out.println() ;

         System.out.print ( "\tReturn Type: " + mth.getGenericReturnType() ) ;
         System.out.println() ;
      }


      DynamicJavaClassLoad o = (DynamicJavaClassLoad) cname.newInstance() ;
      o.processJavaClassFiles() ;
      o = (DynamicJavaClassLoad) cname.getDeclaredConstructor(String.class).newInstance("/home/dheeru/Development/github/Zeal/Programs/Java") ;
      o.processJavaClassFiles() ;

   }
}
