#include<stdio.h>
int main(){
    int a,b=0;
    scanf("%d",&a);
    for(int i=1;i<=(a/2)+1;i++){
        if(a%i==0){
            b++;
        }
    }
    if(b>1) printf("Not Prime");
    else printf("Prime");
    
}