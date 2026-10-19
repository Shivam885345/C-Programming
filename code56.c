#include<stdio.h>
int sum(int a,int b);
int main(){
    int a,b;
    printf("take value of a and b :");
    scanf("%d%d",&a,&b);
    int result=sum(a,b);
    printf("sum=%d\n",result);
    return 0;

}
int sum(int a,int b){
    return a+b;
}


