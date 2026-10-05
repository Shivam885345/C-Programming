#include <stdio.h>
int main(){
    float logic,math,com,nep,front,total,per;
    float percentage;
    printf("enter marks of logic:");
    scanf("%f",&logic);
    printf("Enter marks of math:");
    scanf("%f",&math);
    printf("\nEnter the value of com:");
    scanf("%f",&com);
    printf("\nEnter the value of nep:");
    scanf("%f",nep);
    printf("\nEnter the value of front");
    scanf("%f",front);
    total=(logic+math+com+nep+front);
    per=(total/500)*100;
    printf("percentage is %.2f\n",per);
    if(per>90){
        printf("Grade A");
    }
   else if(per>80){
        printf("Grade B");
    }
   else if(per>70){
        printf("Grade C");
    }
    else if (per>60){
        printf("Grade D");
    }
    else if (per> 50){
        printf("Grade E");
    }
    else{
        printf("Fail");
    }
    return 0;
}









    
