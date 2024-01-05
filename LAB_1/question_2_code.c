//C code for finding a substring in a string:
#include <stdio.h>
#include <string.h>

int main() {
    char string[100], substring[50];
    printf("Enter string : ");
    gets(string);
    printf("Enter substring to find : ");
    gets(substring);

    int i, j, flag;

    for (i = 0; i < strlen(string); i++) {
        int k = i;
        flag = 1;

        for (j = 0; j < strlen(substring); j++) {
            if (string[k] != substring[j]) {
                flag = 0;
                break;
            }
            k++;
        }

        if (flag == 1) {
            printf("Substring found at position %d\n", i);
            break;
        }
    }

    if (flag == 0) {
        printf("Substring not found\n");
    }

    return 0;
}
