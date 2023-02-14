#include <stdio.h>
int main (){
	int n;
	float i,s=0;
	do 
	{	printf("n= ? ");
		scanf("%d",&n);
		
	}while (n<0);

for (i=1;i<=n;i++){
/*on doit utiliser i de type float si on vas calculer un reél  */

s= s + (1/i);
}
printf("somme egale %.2f",s);
return 0;
}












