#include<stdio.h>
int main()
{
   int a,b;
     printf("DATE:9/2/2023\nNAME:Vatsal Thummar\nWAP of printing perfect numbers in which range is input\n");
   scanf("%d %d",&a,&b);
 int j,s,m;
for(m=a;m<=b;m++)
{
    for(j=1,s=0;j<m;j++)
   {
    if(m%j==0)
   { 
    s=s+j;
   }
   }
   if(s==m)
   printf("%d\n",s);
}  


return 0;
}