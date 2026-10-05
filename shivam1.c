#include<stdio.h>
int main(){
    int x,y;
    printf("enter the value of x and y");
    scanf("%d%d",&x,&y);
    printf("value of x is %d and value of y is %d");
    x=x+y;
    y=x-y;
    x=x-y;
    return 0;
    printf("after swappimg, the value of x is %d and value of y is %d", x,y);


}