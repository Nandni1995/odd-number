//printing odd numbers in a range
#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,i;
clrscr();
printf("enter the two limits");
scanf("%d%d",&a,&b);
for(i=a;i<=b;i++)
{
if(i%2!=0)
{
printf("%d ",i);
}
}
getch();
}
