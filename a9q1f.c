#include<stdio.h>
int main()
{
int i,j,k,l;
for(i=1;i<=5;i++)
{
for(j=1;j<=5;j++)
{
if(j==i||j==6-i)
printf("$ ");
else if(i==1||i==5)
printf("* ");
else if(j==1||j==5)
printf("* ");
else
printf("  ");
}
printf("\n");
}
return 0;
}