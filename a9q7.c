#include<stdio.h>
void cir(int *,int *,int *);
int main()
{
int x,y,z,*a,*b,*c;
printf("DATE:9/2/2023\nNAME:Vatsal Thummar\nWAP of printing cicularly shifted numbers\n");
scanf("%d %d %d",&x,&y,&z);
a=&x;
b=&y;
c=&z;
cir(a,b,c);
printf("x=%d y=%d z=%d\n",x,y,z);
cir(a,b,c);
printf("x=%d y=%d z=%d\n",x,y,z);
    return 0;
}
void cir(int *p,int *q,int *r)
{
int t;
t=*p;
*p=*q;
*q=*r;
*r=t;
}