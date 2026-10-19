// #include<stdio.h>
// int main (){
//     int i,n=10;
//     for(i=1;i<=n;i++){
//         printf("%d\n",i);
//         if(i==5){
//             break;
//         }
//     }
//     return 0;
// }
#include<stdio.h>
int main (){
    int i,n=10;
    for(i=1;i<=n;i++){
       
       
        if(i==5){
             
            continue;
            
        }
         printf("%d\n",i);
    }
    return 0;
}