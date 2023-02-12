#include<stdio.h>
int main()
{
    char i;
    int j;
    for(j=1;j<=5;j++)
    {
        for(i=65;i<=64+j;i++)
        printf("%c ",i);
        printf("\n");
    }
    
    return 0;
}