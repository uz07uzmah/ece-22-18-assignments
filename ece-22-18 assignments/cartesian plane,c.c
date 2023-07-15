#include<stdio.h>
int main()
{ int x,y ;
printf ("input values of x and y coordinate: \n");
scanf ("%d%d",&x,&y);
  if (x==0 && y>0)
  printf ("point lies on +ve y axis");
  else if (x==0 && y<0)
  printf ("point lies on -ve y axis");
  else if (x>0 && y==0)
  printf ("point lies on +ve x axis");
  else if (x<0 && y==0)
  printf ("point lies on -ve x axis");
  else if (x>0 && y>0)
  printf ("point lies in 1st quadrant");
  else if (x>0 && y<0)
  printf ("point lies in 2nd quadrant");
  else if (x<0 && y<0)
  printf ("point lies in 3rd quadrant");
  else if (x>0 && y<0)
  printf ("point lies in 4th quadrant");
  else 
  printf ("point lies on the origin");
}