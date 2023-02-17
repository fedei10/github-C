	#include <stdio.h>
	#include <math.h>
	int inverse (int n ){
		int aux=0,c=0 ; 
		do {
		
		aux=(aux*10)+(n%10);
		n=n/10;
	}while (n!=0);
	if (aux=n ) {
		c++;
	}
	else {
		c=0;
	}
return c ; 
}
	int main ()
	 { 
	 int c,a;
	 printf(" a = ?");
	 scanf("%d",&a);
	 c=inverse(a);
	 if (c=0) { 
	 printf(" non palindrome");
	 }else {
	 	printf(" palindrome");
	 }
	 }
		
	
