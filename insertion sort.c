#include<stdio.h>
int main()
{
	int a[5]={6,12,18,3,5};
	int n=5;
	int i,j,key;
	for (i=1;i<n;i++)
	{ 
	key=a[j];
	j=i-1;
	while (j>=0 && a[j]>key)
	{
		a[j+1]=a[j];
		j=j-1;
	}
	a[j+1]=key;
	
	}
	for (i=0;i<n;i++)
	printf("%d\t",a[i]);
}