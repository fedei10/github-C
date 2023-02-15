#include <stdio.h>
int premier(int n )
{
	int s=1,i=2;
for(i=2;i<=n/2;i++){
if (n%i==0) {
s=0;
break;
}
}
}
int main ()
{
	int i,n;
	do {
		printf("n= ?");
		scanf("%d",&n);
		
	}while (n<=0);
	
if (premier(n)==1) { 
printf(" nombre premier");

} else 
printf("nombre non premier "); 
}


