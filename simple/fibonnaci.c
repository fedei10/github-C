#include <stdio.h>
int main (){
int n,i,u,up,upp; 
	do {
		printf("n= ?");
		scanf("%d",&n);
		
	}while (n<2);

	upp=0;
	up=1;
	printf("les termes de suite fibonnaci sont : \n");
	printf("  U0 = %d \n",upp);
	printf("  U1 = %d  \n ",up);
for (i=2;i<=n;i++){
	u=upp+up;
	printf(" U%d =%d \n ",i,u);	
	upp=up;
	up=u;
			} 
}
