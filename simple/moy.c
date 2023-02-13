#include <stdio.h>

float moy (float a,float b )
{
	float c ; 
	c=(a+b)/2;
	return c ;	
}
float main (){
float n,b,c ; 
printf("donner deux réel : ");
scanf("%f%f",&n,&b);
c=moy(n,b);

printf("%f",c);
	
}
