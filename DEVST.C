/*Write a c program to print all strong numbers between 1 to n
------------------------------------------------------------------*/

#include<stdio.h>
#include<conio.h>
int strong(int);
void main()
{
    int n,i,c=0;
    printf("Enter the limit: ");
    scanf("%d",&n);
    printf("\nThe strong numbers between 1 to %d are ",n);
    for(i=1;i<=n;i++)
    {
        c=strong(i);
	if(c==1)
        printf("%d ",i);
    }
    getch();
}
int strong(int p)
{
int m,s,result=0,r,i;
m=p;
while(p!=0)
{
r=p%10;
s=1;
for(i=1;i<=r;i++)
{
s=s*i;
}
result=result+s;
p=p/10;
}
if(m==result)
return 1;
else
return 2;
}