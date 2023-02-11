#include<stdio.h>
void sumdiv(int);
int main()
{
   int i;
    printf("DATE:9/2/2023\nNAME:Vatsal Thummar\nWAP to print  perfect number\n");
   scanf("%d",&i);
   sumdiv(i);
    return 0;
}
void sumdiv(int i)
{
    int j,s;
    for(j=1,s=0;j<i;j++)
   {
    if(i%j==0)
   {
    printf("%d\n",j);
    s=s+j;
   }
  
   }
    if(s==i)
    printf("%d",i);
}