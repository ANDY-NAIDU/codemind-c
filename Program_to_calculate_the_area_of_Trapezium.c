#include<stdio.h>
void area(int b, int c, int h)
{
    float a;
    a=0.5*h*(b+c);
    printf("%.4f",a);
}
int main()
{
    int b, c, h;
    float a;
    scanf("%d %d %d", &b, &c, &h);
    area(b ,c ,h);
} 