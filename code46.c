#include<stdio.h>
int main(){
    int i,x,sum=0;
    printf("enter the value of x :");
    scanf("%d",&x);
    for(i=1;i<=x;i++){
        sum+=i;
    }    
        printf("sum is %d\n",sum);
    for(i=x;i>=1;i--){
        printf("%d\n",i);
    }    
        return 0;
    
}

