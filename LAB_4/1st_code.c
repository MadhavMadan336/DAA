/*STARTING FROM F(1)=1,F(2)=2,FIND THE Nth FIBONACCI NUMBER F(N)=F(N-1)+F(N-2) IN O(N) TIME AND O(1) SPACE
  INPUT:-N
  OUTPUT:-F(N)
*/
#include <stdio.h>

int fibonacci(int n) {
    if (n <= 0) return -1;  // Invalid input

    if (n == 1) return 1;
    if (n == 2) return 2;

    int prev = 1;
    int curr = 2;

    for (int i = 3; i <= n; i++) {
        int next_fib = prev + curr;
        prev = curr;
        curr = next_fib;
    }

    return curr;
}

int main() {
    int n;
    printf("Enter the value of N: ");
    scanf("%d", &n);

    int result = fibonacci(n);

    if (result != -1) {
        printf("The %dth Fibonacci number is: %d\n", n, result);
    } else {
        printf("Invalid input. N should be a positive integer.\n");
    }

    return 0;
}
