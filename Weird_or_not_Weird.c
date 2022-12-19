#include<stdio.h>
int main()
{
    int a;
    scanf("%d",&a);
  
    if(a%2!=0)
    {
        printf("weird");
    }
    else
    {
        if(2<a<5||a>20)
        {
        printf("not weird");
        }
        else if(6<a<20)
        {
            printf("weird");
        }
    }
   
}
 
