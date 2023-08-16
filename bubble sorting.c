#include<stdio.h>
int main()
{
	int a[5]={6,12,18,3,5};
	int n=5;
	int i,j,min,temp;
	for (i=0;i<n-1;i++)
	{
	for (j=0;j<n-1;j++)
	{
		if (a[j]>a[j+1])
		{
		temp=a[j];
		a[j]=a[j+1];
		a[j+1]=temp;
		}
	}
	}
	for (i=0;i<n;i++)
	printf("%d\t",a[i]);
}