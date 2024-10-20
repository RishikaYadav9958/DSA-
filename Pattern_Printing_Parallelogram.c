#include <stdio.h>
int main() {
    int m, n;
    printf("Enter number of rows: ");
    scanf("%d", &m);
    printf("Enter number of columns: ");
    scanf("%d", &n);
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < m - i - 1; j++) {
            printf(" ");
        }
        for (int k = 0; k < n; k++) {
            printf("*");
        }
        printf("\n");
    }
return 0;
}
