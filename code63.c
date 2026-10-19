#include<stdio.h>
int main() {
    int cy,yoj,bonus,service;
    printf("enter the cy and yoj");
    scanf("%f%f",&cy,&yoj);
    service=yoj-cy;
    if(service>3){
        bonus=2500;
        printf("bonus=%d",bonus);

    }
    else{
        printf("do nothing");
    }
    return 0;

}

