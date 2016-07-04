class BluePrint {

   int i ;
   char c ;
   long l ;

   public int  getI() { return i ; }
   public char getC() { return c ; }
   public long getL() { return l ; }

   public void setI( int  ai ) { i = ai ; }
   public void setC( char ac ) { c = ac ; }
   public void setL( long al ) { l = al ; }

   public static void main ( String[] abcs ) {

      BluePrint bp1 = new BluePrint() ;
  
      bp1.setL( 12345677 ) ;
      System.out.println ( bp1.getL() ) ;

   }
   
}

