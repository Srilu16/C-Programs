#include<stdio.h>
void main()
{
char n;
printf("Give the alphabet:");
scanf("%c",&n);
if (n=='a' || n=='e' || n=='i' || n=='o'|| n=='u'||n=='A' || n=='E' || n=='I' || n=='O'|| n=='U')
{
printf("The alphabet %c is a vowel",n);
}
else if (n>='A' & n<='Z' || n>='a' & n<='z')
{
printf("The alphabet %c is a consonant",n);
}
else
printf("%c is not an alphabet",n);
}