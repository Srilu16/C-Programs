#include<stdio.h>
int area();
int peri();
int a;
void main()
{
printf("Please provide the length of a side of the triangle : ");
scanf("%d",&a);
printf("The perimeter is %d\n",peri());
printf("The area is %d\n",area());
}
 
int area()
{
return a*a;
}

int peri()
{
return 4*a;
}