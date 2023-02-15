#include <stdio.h>
int main () 
{ 
int x,y,i,j;
int m[20][20];

do{
printf(" donner moi les facteurs a multiplier  x et y  : ");
scanf("%d %d",&x,&y);
y=y+1;	
} while ((x<0) &&  (y<0));
printf(" x*y |");
printf(" \t -----------------------");
printf("\n");

	for (i=1;i<=x;i++){
	for (j=1;j<=y;j++)
	{
	m[i][j]=i*j;	
	}	
}
for ( i=1;i<=x;i++)
{
for (j=1;j<y;j++){

	printf("%d",m[i][j])    ;
if (j<y-1){
printf("\t",":","\n");	
}
else  {
printf(" \n ");	
}
}
}
return 0 ;	
}
