class MyMenu {

   public char ch = '*' ;
   public String menuText = "" ; 
   public int startWith = 1 ;
   public boolean isChoiceOk = true ;
   public boolean choiceOk = true ; 
   public String choiceText = "Choice" ;
   public int length = 0 ;
   public String[] list = null ;
   public int lineLength = 40 ;
   public String choiceSeparator = ":" ;
   public String listSeparator = "." ;
  
   void setChar( char ch ) { this.ch = ch ; } 
   char getChar() { return ch ; }

   void setMenuText ( String menuText ) { this.menuText = menuText ; } 
   String getMenuText() { return menuText ; } 

   void setStartWith( int startWith ) { this.startWith = startWith ; }
   int  getStartWith() { return startWith ; }

   void setChoiceText ( String choiceText ) { this.choiceText = choiceText ; }
   String getChoiceText () { return choiceText ; }

   void setChoiceTextOk( boolean isChoiceOk ) { this.isChoiceOk = isChoiceOk ; }
   boolean isChoiceTextOk() { return isChoiceOk ; }
  
   void setLength( int length ) { this.length = length ; }
   int getLength () { return length ; } 

   void setChoiceSeparator ( String choiceSeparator ) { this.choiceSeparator = choiceSeparator ; }
   void setListSeparator ( String listSeparator ) { this.listSeparator = listSeparator ; }

   void setList ( String[] list ) { this.list = list ; }
   String[] getList ( ) { return list ; }

   void drawLine() {
      prt();
      for ( int i=0 ; i < lineLength ; i++ ) {
         prc() ;
      }
   }

   void menuText() {

     int l = lineLength - menuText.length() ; 
     l--; l-- ;
     prt(); prc(); prss (l/2); prmt(); prss(l/2);prc();
      
   }

   void prn() { System.out.println() ; }
   void prt() { System.out.print("\t") ; }
   void prs() { System.out.print ( " " ) ; }
   void prc() { System.out.print ( ch ) ; }
   void prmt() { System.out.print ( menuText ) ; }
   void prst( String s) { System.out.print ( s ) ; }
   void prls( ) { System.out.print ( listSeparator ) ; }
   void prd() { System.out.print ( "." ) ; }
   void prcol() { System.out.print ( ":" ) ; }
   void prcs() { System.out.print ( choiceSeparator ) ; }
   void prnm( int num) { 
      System.out.print ( num ) ;
   }
   void prch() { System.out.print( choiceText ) ; } 

   void prss( int sl ) {
      for ( int i = 0 ; i < sl ; i++ ) { prs(); }
   }

   boolean displayMenu() {

      if ( list == null ) { return false ; }

      if ( list != null && length == 0 ) {
          length = list.length ;
      }

      prn() ;
      drawLine() ; prn() ;
      menuText() ;
      prn() ;
      drawLine() ; prn() ;
      int st = startWith ; 

      for ( int i = 0 ; i < length ; i++ ) {

         if ( list[i] == null ) { continue ; } 

         int l = lineLength - list[i].length() - 6 ;
         prt(); prc(); prs(); prnm( st ) ; prls() ; prs(); prst( list[i] ); prss(l); prc();prn();
         st++ ;
      }
 
      int l = lineLength - "Exit".length() - 6 ; 
      prt();prc();prs(); prnm ( 0 ) ; prls(); prs(); prst ( "Exit" ) ; prss(l); prc(); prn();
      drawLine() ; prn() ;
      prt();prst( choiceText) ; prcs(); prs();
      return true ;
   }


   public static void main( String[] args ) {

      String[] list = new String [4] ;

      list[0] = "Hi One" ;
      list[1] = "Raw Two" ;
      list[2] = "Three 3 are 9" ;

      MyMenu mm = new MyMenu() ;

      mm.setList ( list ) ;
      mm.setMenuText ( "How is this? Nee Naa Pee Poo" ) ;
      mm.setChar ('#') ;
      mm.setChoiceText("Select") ;
      mm.setChoiceSeparator ( "=>" ) ;
      mm.setListSeparator ( ">" ) ;
      mm.displayMenu() ;

      MyMenu mm1 = new MyMenu() ;

      list[3] = "Hi hi Hi Hi Hi Hi HI...." ;
      mm1.setList ( list ) ;
      mm1.displayMenu() ;

      System.out.println() ;
      
   }
}
