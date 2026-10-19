#include<stdio.h>
int main(){
    int n=121;
    int temp;
    int rem,rev=0;
    temp=n;
    while(temp>0){
        rem=temp%10;
        rev=rev*10+rem;
        temp/=10;

    }
    if (rev==n){
    printf("%d is palindrome",rev);
    }
    else {
        printf("it is not palindrome number");
    }
return 0;

}