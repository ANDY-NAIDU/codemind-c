#include<stdio.h>
int main()
{
    int d, y=365, w=7;
    scanf("%d",&d);
    w=(d%y)/w;
    y=(d/y);
    printf("%d
%d",y ,w );
}
