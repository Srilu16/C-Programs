#include<stdio.h>
void main()
{
int n;
int fact=1; //since we are dealing with product we have to keep =1 otherwise 0*anything=0
printf("Enter the number:");
scanf("%d",&n);
for(int i=1;i<=n;i++) // or u can write (i=n;i>=1;i--) here we are going from bottom to up
{
fact=fact*i;
}
printf("\nThe factorial of %d is %d",n,fact); // we have to put printf in the end since we want it to output only once that too the final ans otherwise each time loop is executed the output for each will be given
}