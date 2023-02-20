#include <stdio.h>
#include <stdlib.h>

typedef struct  
{ 
	int jj,mm,aa;
} date ;
  
  void saisie ( date *d)
  {
  do 
  { printf(" donner l'annee \n");
  	scanf("%d", &(d->aa));
  	
	  }while ((d->aa)<2000 );
	  
  do 
  { printf(" donner le mois  \n");
  	scanf("%d", &(d->mm));
  	
	  }while (   (d->mm<0)  && (d->mm >12) ) ;
  
  do 
  { printf(" donner le jour  \n");
  	scanf("%d", &(d->jj));
  	
	  }while (   ( d->jj<=1)  && (d->jj >=31)  );
	  
	  
}

date comparer(date d1,date d2){

if (d1.aa> d2.aa )
return (d1);
else if (d1.aa<d2.aa)
		return (d2);
	
	else if (d1.mm>d2.mm)
	return(d1);
	else if (d1.mm<d2.mm)
	return (d2);
	else if (d1.jj>d1.jj)
	return (d1);
	else return (d2);
}

void affiche (date d ) {
	printf("  %d   :   %d :  %d    \n",d.aa,d.mm,d.jj);
}


void main ()
{
date* d1,*d2;
d1=(date*)malloc(sizeof(date) ) ;
d2=(date*)malloc(sizeof(date) ) ;
saisie(d1);
saisie(d2);
printf(" la date plus récente est : ");
affiche(comparer(*d1,*d2));
}
	  

  	  	
  	
  	
  
