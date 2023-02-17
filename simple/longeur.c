#include <stdio.h>
 int longeur(int n  )
{ int c=0;
do 
{
c++;
n=n/10;

	}while (n!=0);
return c;	
} 
int main () 
{

int a,c;
printf(" a = ?");
scanf("%d",&a);
c=longeur(a);
printf(" longeur de a = %d",c);
return 0; 
}
