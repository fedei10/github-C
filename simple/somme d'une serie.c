#include <stdio.h>
#include <math.h>

double power (double x, int n) {
    double result = 1.0;
    int i;

    for (i = 0; i < n; i++) {
        result *= x;
    }

    return result;
}
double main (){
	int n;
	double i,s=0;
	do 
	{	printf("n= ? ");
		scanf("%d",&n);
		
	}while (n<0);

for (i=0;i<=n;i++){
/*on doit utiliser i de type float si on vas calculer un re�l  */
s= s+power(10,i);
}
printf("somme egale %.2f",s);
return 0;
}




