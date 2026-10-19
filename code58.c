#include <stdio.h>

int main() {
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    if (n >= 0) {
        goto positive;
    } else {
        goto negative;
    }

positive:
    printf("Number is positive or zero");
    goto end;

negative:
    printf("Number is negative");

end:
    return 0;
}