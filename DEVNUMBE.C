/*Write a c program to print 1 to n using while loop*/

#include<stdio.h>
#include<conio.h>
void main()
{
int i=1,n;
printf("Enter the number: ");
scanf("%d",&n);
printf("\nThe numbers are\n");
while(i<=n)
{
printf("%d ",i);
i++;
}
getch();
}