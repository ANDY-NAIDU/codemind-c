#include<stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    int b=a;
    int temp=0;
    while(a>0){
        temp=temp+a%10;
        a=a/10;
        if(a<1) break;
        temp=temp*10;
    }
    if(b==temp) printf("True");
    else printf("False");
}