#include <stdio.h>

int main() {
    int num, i, count = 0;
    printf("Enter a positive Number : ");
    scanf("%d", &num);

    for (i = 2; i <= num/2; i++) {
        if (num % i == 0) {
            count++;
        }
    }

    if (count == 0) {
            printf("\n%d is a prime number.", num);
      }
    else {
        printf("\n%d is not a prime number.\n", num);
     }

    return 0;
}

