#include  "main.h"
#include <stdlib.h>
#include <stdio.h>


void print_error() {
    printf("Error\n");
    exit(98);
}

void check_arguments(int argc, char *argv[]) {
    if (argc != 3) {
        print_error();
    }
    for (int i = 1; i < argc; i++) {
        for (int j = 0; j < strlen(argv[i]); j++) {
            if (argv[i][j] < '0' || argv[i][j] > '9') {
                print_error();
            }
        }
    }
}

void multiply(char *num1, char *num2, int len1, int len2) {
    int *result = (int*)calloc(len1 + len2, sizeof(int));
    if (result == NULL) {
        print_error();
    }
    int i_n1 = 0;
    int i_n2 = 0;
    for (int i = len1 - 1; i >= 0; i--) {
        int carry = 0;
        int n1 = num1[i] - '0';
        i_n2 = 0;
        for (int j = len2 - 1; j >= 0; j--) {
            int n2 = num2[j] - '0';
            int sum = n1 * n2 + result[i_n1 + i_n2] + carry;
            carry = sum / 10;
            result[i_n1 + i_n2] = sum % 10;
            i_n2++;
        }
        if (carry > 0) {
            result[i_n1 + i_n2] += carry;
        }
        i_n1++;
    }
    int i = len1 + len2 - 1;
    while (i >= 0 && result[i] == 0) {
        i--;
    }
    if (i == -1) {
        printf("0\n");
    } else {
        for (; i >= 0; i--) {
            printf("%d", result[i]);
        }
        printf("\n");
    }
    free(result);
}

int main(int argc, char *argv[]) {
    check_arguments(argc, argv);
    char *num1 = argv[1];
    char *num2 = argv[2];
    int len1 = strlen(num1);
    int len2 = strlen(num2);
    multiply(num1, num2, len1, len2);
    return 0;
}
