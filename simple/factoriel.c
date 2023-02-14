#include <stdio.h>
int fact(int n) 
{
int i,f=1; ; 
for (i=1;i<=n;i++)
{
f=f*i;
}
return f ; 
}

int main (){
	int n;
	int i,c;
	do 
	{	printf("n= ? ");
		scanf("%d",&n);
		
	}while (n<0);
c=fact(n);
printf("le fact de F = %d",c);


}



