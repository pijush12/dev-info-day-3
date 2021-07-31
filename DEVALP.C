/*Write a c program to print all alphabets from a to z using while loop*/

#include<stdio.h>
#include<conio.h>
void main()
{
char c='a';
printf("The alphabets are: ");
while(c<='z')
{
printf("%c ",c);
c++;
}
getch();
}