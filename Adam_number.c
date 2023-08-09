#include<stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    int a2=a*a;
    
    int rev=0;
    
    while(a>0){
        rev=rev+a%10;
        a=a/10;
        if(a<1) break;
        rev=rev*10;
        
    }
    int rev2=rev*rev;
    
    
    int tempr=a2;
    int a2r=0;
    while(tempr>0){
        a2r=a2r+tempr%10;
        tempr=tempr/10;
        if(tempr<1) break;
        a2r=a2r*10;
        }
        
        int rev22=0;
        while(rev2>0){
        rev22=rev22+rev2%10;
        rev2=rev2/10;
        if(rev2<1) break;
        rev22=rev22*10;
        }
    
    if(a2 ==rev22){
        printf("True");
    }
    else printf("False");
}