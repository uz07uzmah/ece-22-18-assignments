#include<stdio.h>
int main()
{ int i,k,j;
for (i=1;i<=4;i++)
{ 	
for (j=4;j>i;j--)
	{
		printf (" ");
	}
	for (k=1;k<=2*i-1;k++)
	{
		printf ("%d",i);
	}
	printf ("\n");
}
}
 