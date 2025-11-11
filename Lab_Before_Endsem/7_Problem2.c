#include <stdio.h>
#include <stdlib.h>

int main() {
    int size = 2;
    float *arr = (float *)malloc(size * sizeof(float));
    if (arr == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }

    int count = 0;
    float input;

    printf("Enter float numbers (-1 to stop):\n");
    while (1) {
        scanf("%f", &input);
        if (input == -1)
            break;

        // Resize array if full
        if (count == size) {
            size *= 2;
            arr = (float *)realloc(arr, size * sizeof(float));
            if (arr == NULL) {
                printf("Memory reallocation failed!\n");
                return 1;
            }
        }

        arr[count++] = input;
    }

    printf("\nFinal array contents:\n");
    for (int i = 0; i < count; i++)
        printf("%.2f ", arr[i]);
    printf("\n");

    free(arr);
    return 0;
}
