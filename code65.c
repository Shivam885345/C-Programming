#include<stdio.h>
int main(){
    int maths,english,computer,sst,science;
    float per,total=500,obtained=0;
    printf("enter the value of maths,english,computer,sst,science : ");
    scanf("%d%d%d%d%d",&maths,&english,&computer,&sst,&science);
    obtained=maths+english+computer+sst+science;
    per=(obtained/total)*100;
    printf("per is %f\n",per);
    if(per>=60){
        printf("first division");
    }
    else if(50<=per>=59){
        printf("second division");
    }
    else if(40<=per>=49){
        printf("third division");

    }
    else{
        printf("fail");
    }
    return 0;

    
    
}