#include<stdio.h>
int main()
{
    int a,b,c,i=1;
    scanf("%d%d",&a,&b);
    for(i;i<=b;i++)
    {
       c=a*i; 
       if(i%2!=0)
       {
        printf("%d x %d = %d
",a,i,c);
       }
    }
}