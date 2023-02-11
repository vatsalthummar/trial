#include<stdio.h>
int main()
{
    int n,i,j;
    printf("DATE:9/2/2023\nNAME:Vatsal Thummar\nWAP to print all prime numbers by range entered as input from user\n");
    scanf("%d",&n);
    for(i=2;i<=n;i++)
    {
        for(j=2;j<i;j++)
        {
            if(i%j==0)
            break;
        }
        if(i==j)
        printf("%d\n",i);
    }
    return 0;
}
