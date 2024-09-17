#include<stdio.h>
void main()
{
char ch;
printf("Give the character : ");
scanf("%c",&ch);
if(ch>='A' && ch<='Z' || ch>='a' && ch<='z')
{
printf("The character %c is an alphabet",ch);
}
else if(ch>='0' & ch<='9')
{
printf("The character %c is a number",ch);
}
else
printf("The character %c is a special character",ch);
}

