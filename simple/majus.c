#include <stdio.h>
char main() 
{ 
char c;
printf("c=");
c=getchar();
if (('a'<=c) && (c<='z'))
{
putchar(c-32);
}
else if (  ( ('A')<=c ) && (c<='Z'))
{
	putchar (c+32);
}
else if ((c>='0') && (c<='9'))

{
putchar (c+200);
}


}



