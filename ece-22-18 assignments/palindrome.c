#include<stdio.h>
int main()
{
  int n,s=0,c;
  printf ("enter any no: ");
  scanf ("%d",&n); 
  c=n;
   while (n>0) 
   {
   	s=s*10 +n%10;
   	n=n/10;
   }
   if (c==s)
   printf ("palindrome no.");
   else 
   printf ("not a palindrome no.");
}