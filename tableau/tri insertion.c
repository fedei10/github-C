#include<stdio.h>
#include <math.h>
int main () { 
int n,i,j,aux;
int t[30];

do 
{ 
printf(" n=");
scanf("%d",&n);
}
while ( n<0);


for (i=0;i<n;i++) { 
printf("  t[%d]=  ",i+1);
scanf("%d",&t[i]);
} 


for (i=0;i<n;i++) { 
printf("  t[%d]= %d  ",i+1,t[i]);
}

   for (i = 1; i < n; i++)
   {
       aux = t[i];
       j = i-1;
 
       while (j >= 0 && t[j] > aux )
       {
           t[j + 1] = t[j];
           j = j - 1;
       }
       t[j + 1] = aux;


}
for (i=0;i<n;i++) { 
printf("  t[%d]= %d  ",i+1,t[i]);
}
}
