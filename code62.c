#include<stdio.h>
int main(){
    int quantity,dis=0;
    float total,rate;
    printf("takke value of quantity and rate");
    scanf("%d%f",&quantity,&rate);
    if(quantity>1000){
        dis=10;
        total=(rate*quantity)-(rate*quantity*dis/100);
        printf("total expense is %f",total);

    }
    else{
        printf("total expense",rate*quantity);
    }
    return 0;

}