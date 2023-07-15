#include<stdio.h>
int main()
{
  int i,n;
 printf ("enter n");
 scanf("%d",&n);
 for (i=2;i<=n;i=i*i)
 {
 	printf ("%d ",i);
}
}