#include <stdio.h>

int main () {
	int n,d,i=0; 
	printf(" donner d "); 
	scanf("%d",&d);

	printf(" donner n"); 
	scanf("%d",&n);
while (d>=n) 
{
d=d-n;
i++;
}
printf("  quotient = %d et le reste egale  %d \n",i,d);
}

