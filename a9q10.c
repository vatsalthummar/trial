#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,c;
     printf("DATE:9/2/2023\nNAME:Vatsal Thummar\nWAP of implementation of power function\n");
    printf("enter a and b to find a power b using pow() function\n");
    scanf("%d %d",&a,&b);
    c=pow(a,b);
    printf("answer=%d\n",c);
    return 0;
}