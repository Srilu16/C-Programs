#include<stdio.h>
void main()
{
char ch;
printf("Give the alphabet : ");
scanf("%c",&ch);
if(ch>='A' & ch<='Z')
{
printf("The alphabet %c is an upper case alphabet",ch);
}
else if(ch>='a' & ch<='z')
{
printf("The alphabet %c is a lower case alphabet",ch);
}
else
printf("The alphabet %c is not an alphabtet",ch);
}
