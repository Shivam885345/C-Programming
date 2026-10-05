//write a program to check if a number is divisible by 2 or not
#include<stdio.h>
#include<math.h>
int main(){
    int x;
    printf("enter a number :");
    scanf("%d",&x);
    x=x%2==0;
    printf("%d \n",x);
    return 0;
}
