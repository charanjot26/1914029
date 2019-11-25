#include<stdio.h>
#include<conio.h>
void main()
{
int n,i,fact=1;
clrscr();
printf(“Enter any no: ”);
scanf(“%d”,&n);
for(i=n;i>=1;i--)
{
fact=fact*i;
}
printf(“Factorial=%d”,fact);
getch();
}
