#include <stdio.h>

void findNthFibonacci(int n) {
    unsigned long long a = 1, b = 2, c;

    if (n == 1) {
        printf("The 1st Fibonacci number is: 1\n");
        return;
    }

    if (n == 2) {
        printf("The 2nd Fibonacci number is: 2\n");
        return;
    }

    for (int i = 3; i <= n; i++) {
        c = a + b;
        a = b;
        b = c;
    }

    printf("The %dth Fibonacci number is: %llu\n", n, b);
}

int main() {
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);

    findNthFibonacci(n);

    return 0;
}
