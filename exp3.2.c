#include <stdio.h>

int main() {
    int num, i, sum = 0;
    printf("Enter  number: ");
    scanf("%d", &num);

    for (i = 1; i < num; i++) {
        if (num % i == 0) {
            sum=sum+i;
        }
    }

    if (sum == num) {
        printf("\n perfect number.");
    } else if (sum < num) {
        printf("\ndeficient number.");
    } else {
        printf("\nThe number is abundant.");
    }

    return 0;
}

