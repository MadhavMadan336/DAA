//USE O(1) SPACE COMPLEXITY TO COMPUTE FIBONACCI NUMBERS.
#include <stdio.h>

int findFibonacci(int n) {
    if (n <= 1) {
        return n;
    }

    int prev1 = 0;
    int prev2 = 1;
    int current = 0;

    for (int i = 2; i <= n; i++) {
        current = prev1 + prev2;
        prev1 = prev2;
        prev2 = current;
    }

    return current;
}

int main() {
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);

    int result = findFibonacci(n);

    printf("F(%d) = %d\n", n, result);

    return 0;
}
