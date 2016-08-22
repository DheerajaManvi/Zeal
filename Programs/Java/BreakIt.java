

class BreakIt {

   public static void main( String[] args ) {

      boolean t = true ;

      first : {
         second : {
            third : {  
               System.out.println("Before break.") ;
               if(t) break first;
               System.out.println("NO") ; 
            }
            System.out.println("NOPE") ;
         }
         System.out.println("First Block") ;
      }
   }
}
