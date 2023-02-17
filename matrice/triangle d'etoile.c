#include <stdio.h>

int main (){
	int l,i,j ;
printf(" donner le nombre de ligne : \n");
scanf("%d",&l);
	for(i=1;i<=l;i++){
		for (j=1;j<=i;j++){
			printf("* ");
		}
printf("\n");
}
		return 0;
}
