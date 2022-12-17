#include<stdio.h>
#include<math.h>
int main()
{
    float area,perimeter;
    int r;
    scanf("%d",&r);
    area=3.14*r*r;
    perimeter=2*3.14*r;
    printf("%.2f
",area);
    printf("%.2f",perimeter);
}