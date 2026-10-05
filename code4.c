//this code about how to use diiferent data type
#include<stdio.h>
#include<math.h>
int main(){
    double a,b,c,d,p,e;
    printf ("take value of a,b and c");
    //here d is area of triangle with three different side 
    scanf("%lf%lf%lf",&a,&b,&c);
    e=(a+b+c)/2;
    d= e*(e-a)*(e-b)*(e-c);
    d=sqrt(d);
    printf("the value of d is %lf",d);
    return 0;



}