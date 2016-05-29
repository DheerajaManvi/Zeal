/*

Replace a string with a given string.

*/

#include<stdio.h>
#include<stdlib.h>

main() {

   char *psrc, *pdst, *prep, *pwth ;
   char *t_prep, *t_pwth, *t_pdst, *t_psrc, *o_psrc ;

   psrc = ( char * ) malloc ( sizeof (char) * 100 ) ;
   pdst = ( char * ) malloc ( sizeof (char) * 100 ) ;
   prep = ( char * ) malloc ( sizeof (char) * 100 ) ;
   pwth = ( char * ) malloc ( sizeof (char) * 100 ) ;

   printf ( "Enter any string : ") ;
   scanf  ( "%[^\n]s",psrc ) ;

   printf ( "Enter the repalce text: ") ;
   scanf  ( "%s", prep ) ;

   printf ( "Enter the repalce with text: ") ;
   scanf  ( "%s", pwth ) ;

   o_psrc = psrc ;
   t_pdst = pdst ;

   while( *psrc != '\0') {

      t_psrc = psrc ;
      t_prep = prep ;

      while( *t_prep && *t_psrc == *t_prep && t_psrc++ && t_prep++ ) ;

      if( *t_prep != '\0' ) {

         *t_pdst++ = *psrc ;

      } else if( *t_prep == '\0' ) {

         t_pwth = pwth ;

         while ( *t_pwth && ( *t_pdst++ = *t_pwth++ ) ) ;

          psrc = t_psrc - 1 ;
      }

        psrc++ ;
   }

    *t_pdst = '\0' ;

    printf("\nReplaced '%s' with '%s':",prep, pwth) ;
    printf("\nOriginal Text: %s", o_psrc) ;
    printf("\nReplaced Text: %s", pdst) ;

    printf("\n\n") ;


}




