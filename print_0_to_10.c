// #include <stdio.h>
// int main(){
//     int n=0;
//     do{
//         printf("%d\n",n);
//         n++;
//     } while(n<=10);
//     return 0;
// }
// #include <stdio.h>
// int main(){
//     int i=2;
//     do{
//         printf("Shivam\n");
//         i++;
//     }while(i<=3);
//     return 0;
// }

// Jumping Statement

#include <stdio.h>

int main() {
    int i = 1;

    start:
    printf("%d\n", i);
    i++;

    if (i <= 5)
        goto start;

    return 0;
}
