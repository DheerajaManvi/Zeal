import java.util.* ;

class BuzzFizzRecur {

   int num = 0 ;

   public void buzzfizz(int s,int e) {
      
       if ( s != e ) { 

         if ( s % 3 == 0 && s % 5 == 0) { System.out.println( s + " ==> buzzfizz" ) ;  }
         else if ( s % 3 == 0 ) { num++ ; System.out.println( s + " ==> buzz" ) ;  }
         else if ( s % 5 == 0 ) { num++ ; System.out.println( s + " ==> fizz" ) ;  }
         buzzfizz(++s,e) ;
       } else { 
          return ; 
       }
      
   }


   static public void buzfiz ( int d1, int d2, int s, int e )  {

      if ( s > e ) return ;

      boolean go = false ;
      String str = "" ;

      if ( !go && ( s % d1 == 0 && s % d2 == 0 ) ) { go = true ; str = "BuzzFizz" ; }
      if ( !go && ( s % d1 == 0 ) ) { go = true ; str = "Buzz" ; }
      if ( !go && ( s % d2 == 0 ) ) { go = true ; str = "Fizz" ; }

      System.out.println ( s + " ==> " + str ) ;
     
      try { buzfiz ( d1, d2, ++s, e ) ; } catch ( Exception ee ) { System.out.println ( ee ) ; } 

   }


   public static void main( String[] arg ) {

      if ( arg.length != 4 ) { return ; } 

      try {
      BuzzFizzRecur.buzfiz(Integer.parseInt ( arg[0] ),
                           Integer.parseInt ( arg[1] ), 
                           Integer.parseInt ( arg[2] ), 
                           Integer.parseInt ( arg[3] ) 
                          ) ;

      } catch ( Exception e ) { System.out.println ( e ) ;}
   }
   
}
