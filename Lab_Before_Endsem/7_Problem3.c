#include <stdio.h>
#include <stdlib.h>

void merge(int *arr1, int n1, int *arr2, int n2, int **merged, int *mergedSize) {
    int tempSize = n1 + n2;
    *merged = (int *)malloc(tempSize * sizeof(int));

    int k = 0;
    // Copy elements from arr1
    for (int i = 0; i < n1; i++)
        (*merged)[k++] = arr1[i];
    // Copy elements from arr2
    for (int i = 0; i < n2; i++)
        (*merged)[k++] = arr2[i];

    // Remove duplicates
    for (int i = 0; i < k; i++) {
        for (int j = i + 1; j < k; j++) {
            if ((*merged)[i] == (*merged)[j]) {
                // Shift elements left
                for (int m = j; m < k - 1; m++)
                    (*merged)[m] = (*merged)[m + 1];
                k--;
                j--;
            }
        }
    }
    *mergedSize = k;
}

int main() {
    int n1, n2, i;
    int *arr1, *arr2, *merged, mergedSize;

    printf("Enter size of first array: ");
    scanf("%d", &n1);
    printf("Enter size of second array: ");
    scanf("%d", &n2);

    arr1 = (int *)malloc(n1 * sizeof(int));
    arr2 = (int *)malloc(n2 * sizeof(int));

    printf("Enter elements of first array:\n");
    for (i = 0; i < n1; i++)
        scanf("%d", &arr1[i]);

    printf("Enter elements of second array:\n");
    for (i = 0; i < n2; i++)
        scanf("%d", &arr2[i]);

    merge(arr1, n1, arr2, n2, &merged, &mergedSize);

    printf("\nMerged array (no duplicates):\n");
    for (i = 0; i < mergedSize; i++)
        printf("%d ", merged[i]);
    printf("\n");

    free(arr1);
    free(arr2);
    free(merged);

    return 0;
}
