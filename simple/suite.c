#include<stdio.h>
int main () { 
int n,a,b,c,i;

do {
printf("n="); scanf("%d",&n);
}
while (n<=2);

a=2;
b=1;
for (i=1;i<n;i++)
{
c=a+b;
a=b;
b=c;	
}
printf("le terme u(%d) = %d   ",n,c);

}
