#include<stdio.h>
int main(){
    char cha[10000];
    fgets(cha, sizeof(cha), stdin);
    printf("%s",cha);
}