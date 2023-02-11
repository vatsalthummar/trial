#include<stdio.h>
int main()
{
    float i=1,j,s,x,m=1,l;
    int k,n;
     printf("DATE:9/2/2023\nNAME:Vatsal Thummar\nWAP of cos series\n");
    scanf("%f",&x);
    scanf("%d",&n);
    for(k=1;k<=n;k++)
    {
        for(j=1,i=1,m=1;j<=2*k-2;j++)
        {
            i=i*x;
            m=m*j;
        } 
        if(k%2==0)
        l=-i/m;
        else
        l=i/m;
         s=s+l;
        
    }
   printf("%f",s);
      return 0;
}