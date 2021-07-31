/*Write a c program to print all natural numbers in reverse(n to 1) using while loop*/

#include<stdio.h>
#include<conio.h>
void main()
{
int n;
printf("Enter the number: ");
scanf("%d",&n);
printf("\nThe numbers are: ");
while(n>=1)
{
printf("%d ",n);
n--;
}
getch();
}