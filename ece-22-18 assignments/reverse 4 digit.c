#include<stdio.h>
int main()
{
  int n,reverse =0;
  printf ("enter any no: ");
  scanf ("%d",&n);
   while (n>0) 
   {
   	reverse=reverse *10 +n%10;
   	n=n/10;
   }
   printf ("reverse no. : %d", reverse );
}