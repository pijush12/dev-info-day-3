/*Write a c program to check whether a number is strong number or not
---------------------------------------------------------------------------*/

#include<stdio.h>
#include<conio.h>
void main()
{
int n,m,i,r,result=0,s;
printf("Enter a number: ");
scanf("%d",&n);
m=n;
while(n!=0)
{
r=n%10;
s=1;
for(i=1;i<=r;i++)
{
s=s*i;
}
result=result+s;
n=n/10;
}
if(m==result)
printf("\nThe number is a strong number");
else
printf("\nThe number is not a strong number");
getch();
}