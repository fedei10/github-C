#include <stdio.h>

int main (){
	int l,i,j ;
printf(" donner le nombre de ligne : \n");
scanf("%d",&l);

	
	for(i=1;i<l;i++){
		for (j=1;j<l-i+1;j++){
			printf("* ");
		}
	printf("\n");
	}	
}
