/*


*/

#include<stdio.h>
#include<stdlib.h>

main() {

   int choice ;
   char *c, *c1 , del ;

   c =  ( char * ) calloc ( sizeof (char) , 100 ) ;
   c1 = c ;

   do {

    
       printf("\n\t---------------------------") ;
       printf("\n\t1  =>  Read") ;
       printf("\n\t2  =>  Display") ;
       printf("\n\t3  =>  Encrypted text") ;
       printf("\n\t4  =>  Decrypted text") ;
       printf("\n\t0  =>  Exit") ;

       printf("\n\t----------------------------") ;
       printf("\n\tEnter choice : ") ;
       scanf("\n\t%d",&choice ) ;
       printf("\n\t---------------------------") ; 

       fflush( stdin ) ;

       scanf ("%c", &del ) ;

       if( choice == 1 ) {

          printf("\n\tEnter any string : ") ;
          scanf("%[^\n]s",c) ;  
       }

       if( choice == 2 ) {

         printf("\n\n\tString : %s",c) ;
         printf("\n\n") ;
       }

       if( choice == 3 ) {
   
              c1 = c ;

              while( *c1 != '\0' ) { 

                  *c1 = *c1 + 4 ;
                  c1++ ;
              }
              
       
          printf("\n\n\tEncrypted string : %s",c) ;
          printf("\n\n") ;

       }

       if( choice == 4 ) {

          c1 = c ;

          while( *c1 != '\0' ) {

              *c1 = *c1 - 4 ; 
               c1++ ;
          }
          printf("\n\n\tDecrypted string : %s",c) ;
          printf("\n\n") ;
       }
        

   } while( choice != 0 ) ; 

   printf("\n\n") ;
}
