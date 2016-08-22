

class FibRecur {

   public static void getFib(int first , int second , int cnt, int cur ) {       

      if( cur == cnt )  { return ; }

      int sum = first + second ;
      int temp = first ;
      first = second ;
      second = sum ;

      System.out.print(temp + " " ) ;
      getFib(first , second , cnt, ++cur) ;

    }

    public static void main( String[] args ) {

       FibRecur.getFib(1,1,20, 0) ;
       System.out.println() ;
    }

}
