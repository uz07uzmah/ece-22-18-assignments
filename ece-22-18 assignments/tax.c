#include<stdio.h>
int main()
{
	int sal;
    double tax ;
     printf ("enter salary of person: ");
     scanf("%d",&sal);
 
 if (sal<=150000) 
 {
 	printf ("no tax");
 }
 else if (sal>150001 &&  sal<=300000)
 {
 	tax=sal*0.10;
 	printf("%lf",tax);
 }
 else if(sal>300001 && sal<=500000)
 {
 	tax=sal*0.20;
 	printf("%lf",tax);
 }
 else 
 {
 	tax=sal*0.30; 
 	printf("%lf",tax);
 }
}