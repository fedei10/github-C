#include <stdio.h>


int main(){
int t,h,m,s,r;

do
	{	printf("donner moi un temps exprimé en secondes");
		scanf("%d",&t);
		}
		while (t<0) ; 
	h=t/3600;
	r=t%3600;
	m=r/60;
	s=r%60;
	printf(" %d H : %d M : %d S  ",h,m,s);
return 0;	
}
