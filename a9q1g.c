#include<stdio.h>
int main()
{
    char ch;
    int i,j,k;
    for(i=1;i<=7;i++)
    {
        for(j=1,ch=65;j<=15;j++)
        {
            if(j<=8-i)
            {
                
                printf("%c",ch++);
                
            }
            if(j>7+i)
            {
                ch--;
                printf("%c",ch);
            }
            else if(j>8-i&&j<7+i)
            printf(" ");
            
        }
        printf("\n");
    }
return 0;
}
//doubt