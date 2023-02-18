#include <stdio.h>

int main () { 
int l,i,j;

do{

printf(" donner l ");
scanf("%d",&l);
} while (l<0);

for (i=1;i<=l;i++)
{
	for (j=1;j<=l;j++)
	{
		if (( i==1 || i==l || j==1 || j==l || i==j || j==l-i+1) )
		{
			printf("*");
		}
		else printf(" ");
	}
	printf("\n");
}


}






