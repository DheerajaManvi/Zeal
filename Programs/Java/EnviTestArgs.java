

class EnviTestArgs  {

   public static void main ( String[] args ) {

      for ( String s : args ) {
        
         System.out.format ( "%s => %s\n", s.toUpperCase(), System.getenv( s.toUpperCase() ) ) ; 

      }
   } 
}
