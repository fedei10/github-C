#include <stdio.h>


int main () 

{ 
	int l,c,i,j ;
	
	printf(" donner le nombre de ligne : \n");
	scanf("%d",&l);
	printf(" donner le nombre de colonne : \n");
	scanf("%d",&c);

for (i=1;i<=l;i++){
	for(j=1;j<=c;j++){
		if ( i==1 || i==l || j==1 ||j==c)
printf("*");
else {
printf(" ");
}
}
printf("\n");
}
}
