#include<stdio.h>
void namaste();
void bonjour();
int main(){
    char ch;
    printf("enter 'f' for french and 'i' for indian :");
    scanf("%c",&ch);
    if(ch=='i'){ //here i is character so we must put it in single quotes because if we cant put in single quotes it became variable
        namaste();
    }
    else{
        bonjour();
    }

return 0;
}
void namaste(){
    printf("namaste");
}
void bonjour(){
    printf("bonjour");
}