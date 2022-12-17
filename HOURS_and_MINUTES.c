#include<stdio.h>
int main()
{
    int h, m, r;
    scanf("%d",&r);
    h=r/60;
    m=r%60;
    printf("%d Hour(s) %d Minute(s)", h,m );
}