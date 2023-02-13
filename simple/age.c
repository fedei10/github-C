#include <stdio.h>
#include <math.h>
 
int main () 
{
int an,ann,age ;


	printf(" donner votre  annee de naissance : ");
		scanf("%d",&an);
	do
	{
	
		printf(" donner l'annee courrante' : ");
		scanf("%d",&ann);
}
	while ( ann<2000);
		age=ann-an;
	
	printf(" /n votre age est : %d",age);

}
