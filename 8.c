#include<stdio.h>
float add(float x,float y);
float sub(float x,float y);
float mult(float x,float y);
float div(float x,float y);

float result;
void main()
{
int a;
int b;
char op;
printf("Please give two integers :");
scanf("%d %d",&a,&b);
printf("Please choose operation : + - * / : ");
scanf(" %c",&op);
if(op=='+')
result=add(a,b);
else if(op=='-')
result=sub(a,b);
else if(op=='*')
result=mult(a,b);
else
result=div(a,b);
}


float add(float x,float y)
{
result=x+y;
printf("Result : %.2f",result);
}

float sub(float x,float y)
{
result=x-y;
printf("Result : %.2f",result);
}

float mult(float x,float y)
{
result=x*y;
printf("Result : %.2f",result);
}

float div(float x,float y)
{
result=x/y;
printf("Result : %.2f",result);
}