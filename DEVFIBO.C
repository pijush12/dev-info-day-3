/*Write a c program to print fibonacci series upto n terms
--------------------------------------------------------*/

#include<stdio.h>
#include<conio.h>
void main()
{
int n,i,temp,ft=0,st=1,add;
printf("Enter how many terms you want to display: ");
scanf("%d",&n);
printf("%d ",ft);
for(i=1;i<=n;i++)
{
add=ft+st;
printf("%d ",add);
temp=ft;
ft=add;
st=temp;
}
getch();
}