#include<stdio.h>
void main()
{
char ch;
printf("Give the character : ");
scanf("%c",&ch);
if(ch>='A' & ch<='Z' || ch>='a' & ch<='z')
{
printf("The given character %c is an alphabet",ch);
}
else
printf("The given character %c is not an alphabet",ch);
}