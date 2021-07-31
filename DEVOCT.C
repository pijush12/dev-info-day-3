/*Write a c program to binary to octal number
------------------------------------------------------*/

#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
long long int bin;
int r,i=0,dec=0,oct=0;
printf("Enter the binarry number: ");
scanf("%lld",&bin);
while(bin!=0)
{
r=bin%10;
dec=dec+r*(pow(2,i));
i++;
bin=bin/10;
}
i=1;
while(dec!=0)
{
r=dec%8;
oct=oct+r*i;
i=i*10;
dec=dec/8;
}
printf("\nOctal number is %d",oct);
getch();
}