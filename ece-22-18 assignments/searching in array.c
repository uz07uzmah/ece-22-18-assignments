#include<stdio.h>
int main()
{ int num [10],key,i;
printf("enter 10 no's");
 for(i=0;i<10;i++)
 scanf ("%d",&num[i]);
 printf ("enter the no. to search");
 scanf ("%d",&key);
 for(i=0;i<10;i++)
 {
 	if (num[i]==key)
 	{
 		printf ("no. found");
 		break;
	 }
	 if(i==10)
	 printf ("no. not found");
 }
}