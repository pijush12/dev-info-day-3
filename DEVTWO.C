/*Write a c program to find two's complement of a number
--------------------------------------------------------------*/

#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
int i,length,carry=1;
char s[10],p[10],t[10];
printf("Enter the number: ");
scanf("%s",&s);
length=strlen(s);
for(i=0;i<length;i++)
{
if(s[i]=='1')
p[i]='0';
else if(s[i]=='0')
p[i]='1';
}
p[length]='\0';
for(i=length-1;i>=0;i--)
{
if(p[i]=='1' && carry==1)
t[i]='0';
else if(p[i]=='0' && carry==1)
{
t[i]='1';
carry=0;
}
else
t[i]=p[i];
}
t[length]='\0';
printf("\nThe two's complement of the number is %s",t);
getch();
}