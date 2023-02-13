#include <stdio.h>
int saisie(int *n , int *r  ) 
	{
		int i;
		*r=(int*)malloc(n*sizeof(int));
	for (i=0;i<*n;i++) 
	{ 
	printf(" donner t[i]");
	scanf("%d",(*r+i));
	}
	for ( i=0;i<*n;i++)
	{
			printf("\n %d",*(r+i));	
	}

	}
		
		
		
		int main (){
			int e,c,*t ; 
		do{
			printf("c= ?");
			scanf("%d",&c);
		}while (c<1);
		 saisie(c,t);
	

	}
	
	
	
	

