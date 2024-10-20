#include <stdio.h>

int main() {
    int r;
    printf("Enter the number of rows: ");
    scanf("%d", &r);
    for (int i = 1; i <= r; i++){
        for (int j = i; j <= r; j++) {
            printf("%d", j);
        }
        for (int k = 1; k < i; k++) {
            printf("%d", r); 
        }
        printf("\n");
    }
    return 0;
}
