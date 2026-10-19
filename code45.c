#include<stdio.h>
int main(){
    int i,sum=0;
    printf("enter the value of i :");
    scanf("%d",&i);
    do{
        printf("%d\n",i);
        sum+=i;
        i++;
    }while(i<=4);
    printf("%d\n",sum);
    return 0;
}

//using do and while loop sum of n natural number