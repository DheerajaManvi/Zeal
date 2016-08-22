/*


*/

interface MenuInterface {

   void setEachContent(char eachContent );
   char getEachContent(); 

   void setlistOfContents(int contentList);
   int  getlistOfContents();

   void setStartContentNum(int contStartNum);
   int  getStartContentNum();

   void setperPageContents(int perPageContents);
   int  getPerPageContents();      

   void PageUpDown();

   void setCharChoiceSequence(char choiceSequence);
   char getCharChoiceSequence();
 
   void setMenuDesignOk(boolean designOk);
   boolean getMenuDesignOk();

   void setExitOk(boolean exitOk);
   boolean getExitOk(); 

   void setExitNumber(int exitNum);
   int  getExitNumber();
   
   void setContentStartNum(int startContentNumber);
   int  getContentStartNum();

   void setCharForDesign(char designChar);
   char getCharForDesign();

   void setChoiceOk(boolean choiceOk); 
   boolean setChoiceOk(); 

   void charSequence();
   void NumOfContents();
}


