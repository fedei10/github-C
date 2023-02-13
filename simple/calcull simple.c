#include <stdio.h>


float calcul (float a,float b,char c){
float y;

switch(c)
{
		case'+':
			y=a+b;
			printf("somme des deux reels =  %f",y);
			break;	
		case'-':
			y=a-b;
			printf("soustraction des deux reels =  %f",y);
			break;	
		case'*':
			y=a*b;
			printf("multiplication des deux reels =  %f",y);
			break;		
		case'/':
			y=a/b;
			printf("division des deux reels = %f",y);	
			break;
}
}


void main (){
float n,p;
char r;
printf("donner  l'operation");
scanf("%c",&r);
do {
printf("donner deux reels");
scanf("%f%f",&n,&p);
}while (p<0);

calcul(n,p,r);
	
}

