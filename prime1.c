#include<stdio.h>
int prime();
int a;
void main()
{
    prime();
}
int prime()
{ 
    int res;
    printf("Please give the number : ");
    scanf("%d",&a);
    for(int i=2;i<a/2;i++)
    {
        if(a%i==0)
        res = 0;
        else
        res=1;       
    }

if(res==1)
printf("Not a prime number"); 
else
printf("Prime number");
}