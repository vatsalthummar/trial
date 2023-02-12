#include<stdio.h>
int main()
{
int i,j,k;
char l;
for(i=1;i<=6;i++)
{
    for(k=1;k<=i;k++)
    printf(" ");
    for(j=65;j<=71-i;j++)
    {
        printf("%c ",j);
    }
    printf("\n");
}
return 0;
}
