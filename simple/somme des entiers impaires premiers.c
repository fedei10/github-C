#include <stdio.h>
double power (double x, int n) {
    double result = 1.0;
    int i;

    for (i = 0; i < n; i++) {
        result *= x;
    }

    return result;
}
void main () {
int s,n,c=1,i; ;
	do 
	{	printf("n= ? ");
		scanf("%d",&n);
		
	}while (n<0);
for (i=1;i<=n;i++)
{
s=s+power(c,2);
c=c+2;	
}
printf("somme des %d premiers terme impair egale a %d",n,s);

}


