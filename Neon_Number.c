#include<stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    int b=a*a;
    int temp=0,c=0;
    while(b>0){
        c=c+(b%10);
        b=b/10;
    }
    if(c==a){
        printf("Neon Number");
    }else printf("Not Neon Number");
}