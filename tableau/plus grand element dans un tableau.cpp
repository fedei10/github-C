#include <stdio.h>

int main (){
int n,j,i,max1,aux;
int t[4];
do{

	printf("\n donner la taille du tab: ");
	scanf("%d",&n);
}
while (n<0);



for ( i=0;i<n;i++)
{
printf(" \n t[%d]= ",i+1);
scanf("%d",&t[i]);
}
max1=t[0];
aux=t[0];
for (i=0;i<n-1;i++){
if (t[i]>max1) 
		{
		max1=t[i];	
		}
}
printf(" \n le plus grand element est =: %d",max1);



} 









	
	
