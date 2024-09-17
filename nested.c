#include<stdio.h>
void main()
{
int i,j;
for(i=1;i<=2;++i)
{
printf("\nOuter:%d\n",i);

for(j=1;j<=3;++j)
{
printf("Inner:%d\n",j);
printf("\n %d * %d=%d\n",i,j,i*j);
}
}
}