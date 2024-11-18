#include<stdio.h>
int prime();
int a;
void main()
{
    prime();
}
int prime()
{
    printf("Please give the number : ");
    scanf("%d",&a);
    int count=0;
    for(int i=2;i<a;i++)
    {
        if(a%i==0)
        count++;
                //no else cause you only need to increment count when a % i == 0, and not reset it to 0 in the else block.
    }
if(count>=1)
printf("1, Divisors Count: %d\n", count); 
else
printf("0");
}