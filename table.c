#include<stdio.h>


 int main()
 
  {
   int i,j, lower,upper;

 printf("enter  the lower bound & upper bound of table  ");

  scanf("%d%d",&lower,&upper);

  for (i=lower;i<=upper;i++)
 
   {
   for (j=1;j<=10;j++)
  
       printf("\n %d X %d = %d",i,j,i*j);
  
       printf("\n" );


   }
   return 0;
 }

