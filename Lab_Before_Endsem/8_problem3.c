#include <stdio.h>
#include <stdlib.h>

static int k = 0; 

int is_duplicate(int *arr, int size, int value) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == value)
            return 1;
    }
    return 0;
}

void merge(int *arr1, int n1, int *arr2, int n2, int **merged) {
    int max_size = n1 + n2;
    *merged = (int *)malloc(max_size * sizeof(int));
    if (merged == NULL) {
        printf("Memory allocation failed.\n");
        exit(1);
    }
    for (int i = 0; i < n1; i++) {
        if (!is_duplicate(*merged, k, arr1[i])) {
            (*merged)[k++] = arr1[i];
        }
    }

    for (int i = 0; i < n2; i++) {
        if (!is_duplicate(*merged, k, arr2[i])) {
            (*merged)[k++] = arr2[i];
        }
    }

}
int main() {
    int n1, n2, *arr1, *arr2, *merged;

    printf("Enter size of first array: ");
    scanf("%d", &n1);
    printf("Enter size of second array: ");
    scanf("%d", &n2);

    arr1 = (int *)malloc(n1 * sizeof(int));
    arr2 = (int *)malloc(n2 * sizeof(int));
    if (arr1 == NULL || arr2 == NULL) {
        printf("Memory allocation failed.\n");
        return 1;
    }

    printf("Enter elements of first array:\n");
    for (int i = 0; i < n1; i++) {
        scanf("%d", &arr1[i]);
    }

    printf("Enter elements of second array:\n");
    for (int i = 0; i < n2; i++) {
        scanf("%d", &arr2[i]);
    }

    merge(arr1, n1, arr2, n2,&merged);

    printf("Merged array (without duplicates):\n");
    for (int i = 0; i <k; i++) {
        printf("%d ", merged[i]);
    }
    printf("\n");
    
    free(arr1);
    free(arr2);
    free(merged);
    return 0;
}
