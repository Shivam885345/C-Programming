#include<stdio.h>
int main(){
    int a;
    printf("enter the value of a :");
    scanf("%d",&a);
    a=a%2==0;
    printf("the value of a is %d",a);
    return 0;
}
