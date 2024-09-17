#include<stdio.h>
void main()
{
char n;
printf("Give the character : ");
scanf("%c",&n);
if (n=='a' || n=='e' || n=='i' || n=='o'|| n=='u'||n=='A' || n=='E' || n=='I' || n=='O'|| n=='U')
{
printf("5 Points !!");
}
else if(n>='0' & n<='9')
{
printf("10 Points !!!");
}
else
printf("O Points");
}
