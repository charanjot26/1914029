#include<stdio.h>
#include<conio.h>
void main()
{
int a[5],b[5],c[5],i;
clrscr();
printf(“enter value for array a ”);
for(i=0;i<5;i++)
scanf(“%d”,&a[i]);
printf(“enter value for array b ”);
for(i=0;i<5;i++)
scanf(“%d”,&b[i]);
for(i=0;i<5;i++)
c[i]=a[i]-b[i];
printf(“subtraction”);
for(i=0;i<5;i++)
printf(“ %d ”,c[i]);
getch();
}
