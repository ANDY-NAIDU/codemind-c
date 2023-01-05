#include<stdio.h>
#include<math.h>
int main()
{
 int n,i,esum=0,osum=0;
 scanf("%d",&n);
 int x[n];
 for(i=0;i<n;i++)
 {
 scanf("%d",&x[i]);
 }
 for(i=0;i<n;i++)
 {
 if(x[i]%2==0)
 esum=esum+x[i];
 else
 osum=osum+x[i];
 }
 printf("%d",abs(osum-esum));
}