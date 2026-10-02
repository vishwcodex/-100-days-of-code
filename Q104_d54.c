#include <stdio.h>

int main() {
    int n, x;
    int leftSum = 0, rightSum = 0;

    printf("Enter a positive integer: ");
    scanf("%d", &n);

    for (x = 1; x <= n; x++) {
        leftSum = x * (x + 1) / 2;
        rightSum = (n * (n + 1) / 2) - leftSum + x;

        if (leftSum == rightSum) {
            printf("Pivot integer is: %d\n", x);
            return 0;
        }
    }

    printf("-1\n");

    return 0;
}