#include<stdio.h>
int main()
{
 int n, fac;
 printf ("enter no. to find ");
 scanf ("%d",&n);
 fac=1; 
 while (n>=1)
 {
 	fac=fac*n;
 	n=n-1;
 }
 printf ("\n factorial is : %d",fac);
}