#include<stdio.h>
void main()
{
int a,b;
printf("Provide the x-coordinate and y-coordinate : ");
scanf("%d%d",&a,&b);
if(a>0 && b>0)
{
printf("(%d,%d) lies in the 1st Quadrant",a,b);
}
else if(a<0 && b>0)
{
printf("(%d,%d) lies in the 2nd Quadrant",a,b);
}
else if(a<0 && b<0)
{
printf("(%d,%d) lies in the 3rd Quadrant",a,b);
}
else if(a>0 && b<0)
{
printf("(%d,%d) lies in the 4th Quadrant",a,b);
}
else if(a==0 && b==0)
{
printf("(%d,%d) lies on the origin",a,b);
}
else if(a!=0 && b==0)
{
printf("(%d,%d) lies on the x axis",a,b);
}
else if(a==0 && b!=0)
{
printf("(%d,%d) lies on the y axis",a,b);
}
else
printf("Invalid Input");
}
