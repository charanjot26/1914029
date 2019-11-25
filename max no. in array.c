#include<stdio.h>
#include<conio.h>
void main()
{
int a[5],max,i;
clrscr();
printf(“enter element for the array: ”);
for(i=0;i<5;i++)
scanf(“%d”,&a[i]);
max=a[0];
for(i=1;i<5;i++)
{
if(max<a[i])
max=a[i];
}
printf(“maximum no= %d”,max);
getch();
}
