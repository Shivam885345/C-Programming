#include<stdio.h>
int main(){
    int i,n,mutiple;
    printf("enter the value of n :");
    scanf("%d",&n);
    for(i=1;i<=10;i++){
        mutiple=n*i;
        printf("%d\n",mutiple);
    }
    return 0;

}