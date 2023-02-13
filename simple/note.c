#include <stdio.h>
void main()
{
float note,som,moy ; /* moyenne des notes */
int num ; /* numéro note courante */
som=0 ; num=0 ;

while ( printf("note %d ",num+1), scanf("%f",&note),note>=0                                )	
{
num++;
som+= note;
}
if (num>0 )
{
moy=som/num;
printf("moyenne de ces %d notes : %2.2f",num,moy);

	}	
else printf("aucune note fournie");
		
	}	
	
	
	
	
 

