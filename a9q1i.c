#include<stdio.h>
int main()
{
    int i,j,k,l;
    for(i=1;i<=3;i++)
    { 
        for(k=1;k<=7-2*i;k++)
        printf(" ");
        for(j=1;j<=2*i-1;j++)
        {
            printf("* ");
        }
        printf("\n");
    }
    for(i=2;i>=1;i--)
    {
        for(k=1;k<=7-2*i;k++)
        printf(" ");
        for(j=1;j<=2*i-1;j++)
        {
            printf("* ");
        }
        printf("\n");
    }
    return 0; 
}