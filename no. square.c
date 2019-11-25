#include<stdio.h>
#include<conio.h>
void main()
{
int rev(int);
int r,a;
clrscr();
printf(“enter any no: ”);
scanf(“%d”,&a);
r=rev(a);
printf(“square is : %d”,r);
getch();
}
int rev(int x)
{
return(x*x);
}
