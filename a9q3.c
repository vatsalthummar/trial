#include<stdio.h>
int main()
{
    int i,j,k,l,m,n,a;
        printf("DATE:9/2/2023\nNAME:Vatsal Thummar\nWAP to print pascal triangle\n");
    for(i=1,j=1,k=1;j<=5;j++,i=i*11,k=k*10)
    {
        for(a=5;a>=j;a--)
        printf(" ");
        for(m=k,l=i;m>=1;m=m/10)
        {
        n=l/m;  
        l=i%m;
        printf("%d ",n);
        }
        printf("\n");
    }
    return 0;
}