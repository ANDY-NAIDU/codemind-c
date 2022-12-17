#include<stdio.h>
void days(int d)
{
    int y, w;
    y=d/365;
    w=(d%365)/7;
    printf("%d
%d",y ,w);
}
int main()
{
    int d, w, y;
    scanf("%d",&d);
    days(d);
}