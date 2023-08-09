#include<stdio.h>
int main(){
    int a;
    int c;
    scanf("%d",&a);
    for (int i=1;i<=a;i++){
        int b;
        
        scanf("%d",&b);
        c=b;
        int temp=0;
        while(b>0){
        temp=temp+b%10;
        b=b/10;
        if(b<1) break;
        temp=temp*10;
        }
        
        if(c == temp) printf("True
");
        else printf("False
");
    }
    }