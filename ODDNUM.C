/*Write a c program to print all odd numbers between 1 to 100 using while loop*/

#include<stdio.h>
#include<conio.h>
void main()
{
int i=1;
printf("The odd numbers between 1 and 100 are: ");
while(i<=100)
{
if(i%2==1)
printf("%d ",i);
i++;
}
getch();
}