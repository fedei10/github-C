	#include <stdio.h>
	#include <math.h>
	int inverse (int n ){
		int aux=0 ; 
		do {
		
		aux=(aux*10)+(n%10);
		n=n/10;
	}while (n!=0);
	return aux ; 
}
	int main ()
	 { 
	 int c,a;
	 printf(" a = ?");
	 scanf("%d",&a);
	 c=inverse(a);
	 printf(" l'inverse de %d est :  %d",a,c);
	return 0; 
	}	
	
