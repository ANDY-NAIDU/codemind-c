#include<stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    int temp=0,temp2,b=0;
    while(a>0){
        temp=a%10;
        if(temp>b){
            b=temp;
        }
        a=a/10;
    }
    printf("%d",b);
}