#include<stdio.h>
#include<math.h>
int main(){
    int maths ,logic,ai,biology;
    float total,percentage,total_marks=400.000;
    printf("\ntake value of maths,ai,logic,biology");
    scanf("%d%d%d%d",&maths,&ai,&logic,&biology);
    total=maths+ai+logic+biology;
    percentage=(total/total_marks)*100;
    printf("the value of percentage is %f",percentage);
    return 0;


}