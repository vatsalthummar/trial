#include<stdio.h>
int rec(int );
int main()
{
    int i,m;
    printf("DATE:9/2/2023\nNAME:Vatsal Thummar\nWAP of finding binary equivalent of any integer number entered by users\n");
    printf("enter a integer number\n");
    scanf("%d",&i);
   m = rec(i);
   printf("%d",m);
return 0;
}
int rec(int x)
{
    static int j=1,s=0;
    int k,l;
    if(x<=0)
    return (0);
    if(x>0)
    {
    k=x%2;
    x=x/2;
    l=j*k;
    j=j*10;
    s=l+rec(x);
    }   
    return (s);
}
