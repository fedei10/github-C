#include <stdio.h>
#include <time.h>
int main () { 

int alt=0,c=0,s=0,d;
const int max=30,min=1;
srand(time(NULL));
alt=( rand()%(max-min+1)) + min ; 

printf(" l'ordinateur a choisis un nombre aleatoire entre 1 et 30 ,vous avez 5 tentatives au maximum ! \n ");


do{
printf(" deviner le nombre ");
scanf("%d",&d);
if (d>alt) 
{
printf(" plus moins ! ");	
s=s+1;
} 
else if (d<alt) 
{
printf(" plus grand!");
s=s+1;
}
else if (d=alt){
/* sahit ca veut dire trés bien !*/	
printf(" SAHITTTTTTTT");
c=c+1;
break;	
}

}
while (s<5);




if (s=5) { 
/* ""nchalah mara jeya"" ca veut dire hard luck                      */	
printf(" hard luck  le nombre est %d ",alt);
}














return 0;
}
