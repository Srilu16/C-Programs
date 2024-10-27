//Fibonacci using recursion
#include<stdio.h>
int sumfibo(int n);

void main()
{
int n;
printf("Please give the value of n : ");
scanf("%d",&n);
printf("Fibonacci series is : %d",sumfibo(n));
}
int sumfibo(int n)
{

   int sum=0;
   if(n==1)    //(base condition),x is no of terms,if 1 term then sum will be 0
   return 0;
   else if(n==2)
   return 1;   //(base condition),x is no of terms,if 2 terms then sum will be 1
   else
   sum=sum+sumfibo(n-1)+sumfibo(n-2);
   return 0;
}


//x=6,sum=0+sumfibo(5)+sumfibo(4)
//x=5,sum=0+sumfibo(4)+sumfibo(3)
//x=4,sum=0+sumfibo(3)+sumfibo(2)
//x=2,sum=1+sumfibo(2)+sumfibo(1)
