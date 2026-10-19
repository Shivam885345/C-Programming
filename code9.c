#include<stdio.h>
#include<math.h>
int main(){
    //this code about how to calculate percentage 
    int maths,chemistry,physics,biology,english;
    float total,total_marks=500,percentage;
    printf("take the value of maths,chemistry,physics,biology,english");
    scanf("%d%d%d%d%d",&maths,&chemistry,&physics,&biology,&english);
    total=maths+chemistry+physics+biology+english;
    printf("the value of toatal is %f",total);
    percentage=(total/total_marks)*100;
    printf("\nthe value of percentage is %f",percentage);
    return 0;

}