#include<stdio.h>
int main()
{
 int n,i,sum=0;
printf ("enter value of n : ");
scanf ("%d",&n); 
for (i=1;i<=n;i++)
{
  if (i%2!=0)
  {
  sum =sum +i;
  }
}
printf ("sum of all odd no =%d",sum);
}