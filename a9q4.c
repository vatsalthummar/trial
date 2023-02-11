#include<stdio.h>
int main()
{
int i,j,k=0,s=0;
printf("DATE:9/2/2023\nNAME:Vatsal Thummar\nWAP of series\n");
scanf("%d",&i);
for(j=1;j<=i;j++,k=k*10)
{
k=1+k;
s=s+k;
}
printf("%d",s);
    return 0;
}