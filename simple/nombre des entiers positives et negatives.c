#include<stdio.h>
int main() {
int n,i,j ;
i=0;
j=0;
do
{
printf("n="); scanf("%d",&n);


if (n>0)
i++;
else if (n<0)
j++;
}
while(n>0 || n<0 );


if(i>0 || j>0){

printf(" \n le nombre des entiers positive est %d ",i);
printf("\n  le nombre des entiers negatives est %d ",j);
}
else printf("aucun nombre est saisi");






}

