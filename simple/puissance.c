#include <stdio.h>
#include <math.h>

int main () { 
int c,x,y,i;
printf(" donner x et y ");
scanf("%d%d",&x,&y);
c=x;
for (i=1;i<y;i++)
{	
x=c*x;	
}
printf("%d",x);


}
