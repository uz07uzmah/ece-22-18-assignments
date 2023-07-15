#include<stdio.h>
int main()
{ int i,sum=0;
float avg;
printf ("input a no.:");
for (i=1;i<=10;i++)
{
	printf ("%d\n",i);
	sum=sum+i;
}
avg=sum/10.0;
printf("%d %f",sum,avg);

}