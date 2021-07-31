/*Write a c program to convert binary to decimal number
------------------------------------------------------------------*/

#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
long long int bin;
int r,i=0,dec=0;
printf("Enter the binarry number: ");
scanf("%lld",&bin);
while(bin!=0)
{
r=bin%10;
dec=dec+r*(pow(2,i));
i++;
bin=bin/10;
}
printf("\nThe number in decimal is: %d",dec);
getch();
}