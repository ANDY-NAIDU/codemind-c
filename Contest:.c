#include<stdio.h>
int main()
{
    int a,b,c,d;
    scanf("%d %d%d",&a, &b,&c);
    d=c*2;
    
    if(b+d>=a)
    {
        printf("Qualify");
    }
    else
    {
        printf("Not Qualify");
    }
}