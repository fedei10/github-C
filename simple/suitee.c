#include <stdio.h>
int main () 
{ int n,i,u,un ; 
	do {
		printf("n= ?");
		scanf("%d",&n);
		
	}while (n<=0);
u=6;
for (i=1;i<=n;i++)
{
un=4*u+10;
u=un;	
} 
printf("le terme numero %d  = %d ",n,un);
}
