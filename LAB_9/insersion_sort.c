//IN INSERSION SORT,USE NAMES IN PLACE OF INTEGERS AND SORT IN DESCENDING ALPHABETICAL ORDER.
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    int n, i, j, k;
    char **arr, *temp;

    printf("Enter the number of strings to be sorted: ");
    scanf("%d", &n);

    // Dynamically allocate memory for an array of pointers to strings
    arr = (char **)malloc(n * sizeof(char *));
    
    // Dynamically allocate memory for each string
    for (i = 0; i < n; i++) {
        printf("Enter string %d: ", i + 1);
        char buffer[100];  // Assuming a maximum string length of 100
        scanf("%s", buffer);
        
        arr[i] = (char *)malloc((strlen(buffer) + 1) * sizeof(char));
        strcpy(arr[i], buffer);
    }

    // Insertion Sort for strings in descending order
    for (i = 1; i < n; i++) {
        for (j = i - 1; j >= 0; j--) {
            if (strcmp(arr[i], arr[j]) < 0) {
                break;
            }
        }
        if (i - j > 1) {
            temp = arr[i];
            for (k = i; k > j + 1; k--) {
                arr[k] = arr[k - 1];
            }
            arr[j + 1] = temp;
        }
    }

    printf("\nSorted list of strings in descending order is:\n");
    for (i = 0; i < n; i++) {
        printf("%s\n", arr[i]);
        free(arr[i]);  // Free memory allocated for each string
    }

    free(arr);  // Free memory allocated for the array of pointers

    return 0;
}
