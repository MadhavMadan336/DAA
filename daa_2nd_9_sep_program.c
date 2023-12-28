hsjsndndndndnd

#include <stdio.h>
#include <complex.h>

double complex complex_power(int n) {
    // Base case: (1+i)^0 = 1
    if (n == 0) {
        return 1 + 0 * I;
    }

    // Recursive case
    double complex result = complex_power(n / 2);
    result = result * result;

    // If n is odd, multiply by (1+i)
    if (n % 2 == 1) {
        result = result * (1 + I);
    }

    return result;
}

int main() {
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);

    double complex result = complex_power(n);
    printf("The value of (1+i)^%d is: %.2f + %.2fi\n", n, creal(result), cimag(result));

    return 0;
}
