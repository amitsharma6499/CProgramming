#include<stdio.h>
#include<stdlib.h>


int main ()
 {
  char name[100];
   
  printf("\n enter your name ");
  scanf("%99[^\n]",name);


 system("clear");

  printf("\nHello %s",name);
 return 0;

 }
