#include<stdio.h>
#include<math.h>
int main()
{
    float b, g, h, d, p;
    scanf("%f %f %f",&b, &h, &d);
    p=0.12*b;
    g=b+h+d+p;
    printf("%.2f
%.2f",p ,g);
}
