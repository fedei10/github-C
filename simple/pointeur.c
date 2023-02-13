#include <stdio.h>

void modify (int *x)
{
	*x= *x * 2 ;  
 return *x; 
 }
  
  void main () { 
  int x ; 
printf(" x =  \n");
  scanf("%d",&x);
  modify(&x);
  printf("%d \n",x);
  
  }
