#include<stdio.h>
int main()
{ int n,i,product=1;
printf ("enter any no.");
scanf ("%d",&n); 
for (i=1;i<=n;i++)
{
	product=product*i;
}
printf ("%d",product); 
}