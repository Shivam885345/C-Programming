#include<stdio.h>
void printTable(int n);
int main (){
    int n;
    printf("take value of n :");
    scanf("%d",&n);
    for(int i=1;i<=10;i++){
        printTable(n*i);
        
    }
}
void printTable(int n){
    int i=1;
    printf("%d\n",n);
    
}