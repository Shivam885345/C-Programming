#include<stdio.h>
int main (){
    int bs,HRA=0,DA=0;
    float lef=0;
    printf("enter the value of bs");
    scanf("%d",&bs);
    if(bs<1500){
        HRA=(bs*10)/100;
        DA=(bs*90)/100;
        
    }
    else{
        HRA=500;
        DA=(bs*90)/100;
    }
    lef=bs+HRA+DA;
    printf("gross salery=%f",lef);
    return 0;
    
    



}