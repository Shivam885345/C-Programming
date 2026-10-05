#include <stdio.h>
int main(){
    int even=0,odd=0;
    int i;
    for (i=11; i<=50;i++){
    if(i%2==0){
        even++;
    }
    else{
        odd++;
    }
}
    printf("total even=%d and odd=%d",even,odd);
    return 0;
}
