/*Write a c program to find one's complement of a number
--------------------------------------------------------------*/

#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
int i,length;
char s[10],p[10];
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
printf("\nOne's complement of the number is %s",p);
getch();
}