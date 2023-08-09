#include<stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    int temp=0,b=0,c=1;
    while(a>0){
        b=b+a%10;
        
        temp=temp+a%10;
        c=c*(a%10);
        a=a/10;
        temp=temp*10;
    }
    
    printf("%d",c-b);
}