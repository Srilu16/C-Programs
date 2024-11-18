//Factorial using recursion
#include<stdio.h>
int fact(int n);

void main()
{
int n;
printf("Please give the value of n : ");
scanf("%d",&n);
printf("Factorial of %d is : %d",n,fact(n));
}
int fact(int n)
{

   if(n==0 || n==1) //base condition
        {
          return 1; //for one line statement curly brakets not required
        }
   else
          return n*fact(n-1); //recurrence equation
}


//factorial(6)
//fact(6)=6 x fact(5)
//fact(6)=6 x 5 x fact(4)
//fact(6)=6 x 5 x 4 x fact(3)
//fact(6)=6 x 5 x 4 x 3 x fact(2)
//fact(6)=6 x 5 x 4 x 3 x 2 x fact(1)
//base condition satisfied so (fact(1)=1)
// fact(6) = 6 x 5 x 4 x 3 x 2 x 1
