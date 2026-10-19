#include<stdio.h>
#include<math.h>

int main(){
    int a,count=0,rem,result=0,temp=0;
    printf("enter the value of a:");
    scanf("%d",&a);
    temp=a;
    while(a!=0){
        a/=10;
        count++;

    }
    while(a!=0){
        rem=a%10;
        result+=pow(rem,count);
        a=a/10;
    }
    if(temp==result){
        printf("armstroong number");
    }
    else{
        printf("not armstroong number");
    }
    return 0;
}