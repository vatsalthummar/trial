#include<stdio.h>
int main()
{
int i,j,k,l,m;
for(i=1;i<=5;i++)
{
    for(m=1;m<=11-2*i;m++)
    printf(" ");
    for(j=1,k=0;j<=2*i-1;j++)
    {
        if(j<=i)
        {
            k++;
         printf("%d ",k);
            
        }
        else
        {
            k--;
            printf("%d ",k);
        }
        
    }
    printf("\n");
}
    return 0;
}