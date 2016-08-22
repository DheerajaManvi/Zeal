import java.util.* ;


class SnakeAndLadder {

   int[] snl     = new int[101] ;
   int[] ladders = new int[101] ;
   int[] snakes  = new int[101] ; 
   public static int playerNum = 0 ;

   int cp = 0, np = 0, dp = 0, ns = 0 ;

   String playerName = "Player " + (++playerNum)  ;
   String slnone = "" ;
   boolean playerWon = false ;

   static String result = "" ;

   public SnakeAndLadder () {

      for ( int i = 0; i < 101 ; i++ ) {
         snl[i] = -1 ;
         ladders[i] = -1 ;
         snakes[i] = -1 ;
      }

      snakes[97] = 3 ;
      snakes[26] = 6 ;
      snakes[80] = 11 ;
      snakes[53] = 35 ;
      snakes[79] = 17 ;

      ladders[5]  = 24 ;
      ladders[23] = 85 ;
      ladders[41] = 84 ;
      ladders[56] = 91 ;

   }

   public boolean getStatus() { return playerWon ; }

   public SnakeAndLadder( String playerName ) {

      this() ;
      this.playerName = playerName ;

   }

   public void getDice() {
       dp = (int)(Math.random()*6 )+1 ;
   }

   public void nextRoll() {

      if ( playerWon ) { return ; }
      ns++ ;
   
      getDice() ;

      slnone = "None" ;

      np = 0 ;

      if ( ( (cp+dp) <= 100 ) && ( snakes[cp+dp]  != -1 ) ) { slnone = "Snake" ; np = snakes[cp+dp] ; }
      if ( ( (cp+dp) <= 100 ) && ( ladders[cp+dp] != -1 ) ) { slnone = "Ladder" ; np = ladders[cp+dp] ; }

      System.out.println ( this ) ;   

      if ( (cp + dp) <= 100 ) { 
         cp = cp + dp ; 
         if ( cp == 100 ) { playerWon = true ; }
      } else {
         System.out.println ( "Try again..." ) ;
         return ;
      }

      if ( np != 0 ) { cp = np ; }
      
   }

   public String toString() {

      String s = "===================" ;
      s += "\nName: " + playerName ;
      s += "\nDice: " + dp ;
      s += "\nCur Pos: " + cp ;
      s += "\nNext Pos: " + ( cp + dp ) ;
      s += "\nS/L : " + slnone ; 
      s += "\nNew Pos: " + np ;
      if ( (cp + dp) == 100 ) {
         s += "\nResult: U WON! Congratulations!!" ;
         result += "\nName: " + playerName + ", No Of Steps: " + ns ;
      }
      return s ;
   }
}
