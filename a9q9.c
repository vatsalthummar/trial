#include<stdio.h>
int main()
{
    int a,b,i;
    printf("DATE:9/2/2023\nNAME:Vatsal Thummar\nWAP of implementation of prnting prime factors of any entered number from userside\n");
    scanf("%d",&i);
    for(a=2;a<=i;)
    {
        if(i%a==0)
        {
        printf("%d\n",a);
        i=i/a;
        }
        else
        {
            a++;
        }
    }

    return 0;
}