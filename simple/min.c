#include <stdio.h>

float min (float a,float b )
{
	if (a>b) {
		return b; 
	} else 
	return a ;
}
float main (){
float n,b,c ; 
printf("donner deux r�el : ");
scanf("%f%f",&n,&b);
c=min(n,b);

printf("%2.f",c);
	
}
