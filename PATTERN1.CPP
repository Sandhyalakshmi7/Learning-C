#include<stdio.h>
#include<conio.h>
void main()
{
int i,j,n;
clrscr();
printf("enter the no.of rows");
scanf("%d",&n);
for(i=0;i<n;i++)
{
for(j=1;j<=(i+1);j++)
printf("%d",j);
for(j=j-2;j>=1;j--)
printf("%d",j);
printf("\n");
}
getch();
}