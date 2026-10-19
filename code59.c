#include <stdio.h>

int main() {
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    if (n > 0) {
        goto positive;
    }
    else if (n < 0) {
        goto negative;
    }
    else {
        goto zero;
    }

positive:
    printf("Number is positive");
    goto end;

negative:
    printf("Number is negative");
    goto end;

zero:
    printf("Number is zero");

end:
    return 0;
}