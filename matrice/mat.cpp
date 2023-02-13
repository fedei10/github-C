#include <stdio.h>

int main (){
int n,j,i,aux,m[10][10];
do{

	printf("\n donner la taille du tab: ");
	scanf("%d",&n);
}
while (n<0 );



for ( i=0;i<n;i++)
{
for (j=0;j<n;j++){
printf(" \n m de [%d][%d]  : ",i+1,j+1);
scanf("%d",&m[i][j]);
}
}

printf(" \n la matrice avant le c");
printf("\n");

for ( i=0;i<n;i++)
{
for (j=0;j<n;j++){

	printf(" \t %d ",m[i][j])    ;
if (j<n-1){
printf("  \t ",":"," \n  ");	
}
else  {
printf(" \n ");	
}
}
}



for ( i=0;i<n;i++)
{
for (j=i+1;j<n;j++){

aux=m[i][j];
m[i][j]=m[j][i];
m[j][i]=aux;

}
}

printf("  \n la matrice apres le c");
printf("\n");

for ( i=0;i<n;i++)
{
for (j=0;j<n;j++){

	printf(" \t %d  ",m[i][j]);
if (j<n-1){
printf("  \t ",":"," \n  ");	
}
else  {
printf(" \n ");	
}
}
}
}
