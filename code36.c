#include<stdio.h>
int main (){
    int i,a;
    a=5;
    i=1;
    //outside the loop
    while(i<=10){
        //test expression
        printf("%d\n",a*i);
        //body
        i++;
        //update variable
    }
    return 0;
}