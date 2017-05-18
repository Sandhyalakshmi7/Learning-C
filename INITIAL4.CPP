#include<stdio.h>
#include<conio.h>
void main()
{
int i,j,a,n;
printf("enter the triangle size");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
for(j=n;j>=i;j--)
{
if(j>=(i+1))
printf(" ");
else
{
for(a=j;a>=1;a--)
printf("*");
}
}
printf("\n");
}
getch();
}

