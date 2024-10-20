#include<stdio.h>
int main() {
	int i;
    int numbers[7];
    printf("Enter 7 integers:\n");
    for (i = 0; i < 7; i++)
	{
		scanf("%d",&numbers[i]);
    }

    for (i = 6; i >= 0; i--) {
        printf("%d",numbers[i]);
    }
    printf("\n");
    return 0;
}
