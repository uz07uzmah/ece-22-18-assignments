#include<stdio.h>
int main()
{ 
 int s1,s2,s3,s4,s5,sum,total=500;
 float per;

 printf("enter marks of 5 subjects");
 scanf("%d%d%d%d%d",&s1,&s2,&s3,&s4,&s5);
 
 sum=s1+s2+s3+s4+s5;
 per=(sum*100)/total;
 printf("percentage :%f",per);
}
