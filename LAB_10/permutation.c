//INPUT:-PERMUTATION OF {1,2,....}

#include <stdio.h>
void duplicate(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        int index = arr[i] % n;
        arr[index] += n;
    }
    printf("Elements coming twice:");
    for (int i = 0; i < n; i++) {
        if (arr[i] >= 2 * n) {
            printf("%d ", i);
        }
    }
    printf("\n");
}
int main() {
    int n;
    printf("Enter the size: ");
    scanf("%d", &n);
    int perm[n + 3];
    for (int i = 0; i < n + 3; i++) {
        printf("element%d: ",1+i);
        scanf("%d", &perm[i]);
    }
    duplicate(perm, n + 4);

    return 0;
}
