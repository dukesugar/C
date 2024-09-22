#include <stdio.h>

int main() {
    int cols, rows;

    printf("insert x and y: ");
    scanf("%d %d", &cols, &rows);

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}