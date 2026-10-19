//check wheather number is pallindrome
#include<stdio.h>
int main(){
    int n,original,digit,rev=0;
    printf("take the value of n");
    scanf("%d",&n);
    original=n;
    while(n>0){
        digit=n%10;
        rev=rev*10+digit;
        n=n/10;
    }
    if(original==rev){
        printf("pallindrome");
    }
    else{
        printf("not pallindrome");

    }
    return 0;
    


}
