#include<stdio.h>
int main(){
    int a,b=0,c=0,temp=0;
    scanf("%d",&a);
    while(a>0){
        if((a%10)%2 == 0){
            b++;
        }else if((a%10)%2!=0){
            c++;
        }
        temp=temp+a%10;
        a=a/10;
        temp=temp*10;
    }
    if(b>0 && c<1) printf("Even");
    else if(b<1 && c>0) printf("Odd");
    else if(b>0 && c>0) printf("Mixed");
}