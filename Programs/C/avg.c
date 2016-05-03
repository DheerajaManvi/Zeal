/*


Print the avg and total of the marks given.

*/

#include<stdio.h>
main() {

   int i,n,avg,t,m,s;

   printf("Enter the no of subjects:");
   scanf("%d",&s);

   t=0;
   i=1;

   while(i<=s) {

      printf("Enter the first subject marks %d:",i);
      scanf("%d",&m);
      t=t+m; 
      i=i+1;

   }

   t=t+m;
   avg=t/s;
   printf("total marks:%d\n",t);
   printf("avg marks:%d\n",avg);
   
}
