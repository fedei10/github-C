#include <stdio.h>

int main (){
int n,j,i,c,t[50];
do{

	printf("\n donner la taille du tab: ");
	scanf("%d",&n);
}
while (n<0);

for ( i=0;i<n;i++)
{
printf(" \n donner le caractere numero %d  ",i+1);
scanf("%d",&t[i]);
}



for (i=0;i<n;i++)
{
printf("  \n %4d  ",t[i]);		
}



for (i=0;i<n;i++)
{
printf("  \n %d  ",t[i]);		
}

for(j=1;j<=n;j++) 
    for(i=0;i<n-1;i++)
        if ( t[i] > t[i+1] ) {
                c = t[i];
                t[i] = t[i+1];
                t[i+1] = c;
        }        


for (i=0;i<n;i++)
{
printf("  \n %4d  ",t[i]);		
}


}


