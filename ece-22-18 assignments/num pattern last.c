#include<stdio.h>
int main()

{ int i,j;
for (i=0;i<=3;i++)
{
for (j=0;j<i+1;j++)
{
	printf ("%d",(i+j+1)%2);
}
	printf ("\n");
}
}