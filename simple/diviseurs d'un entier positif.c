#include <stdio.h>
int main ()
{
	int i,n;
	do {
		printf("n= ?");
		scanf("%d",&n);
		
	}while (n<=0);
for (i=1;i<=n;i++) 
{ 
if ( n %i ==0 )
printf("%d est un diviseur de %d \n",i,n);	
}




}
