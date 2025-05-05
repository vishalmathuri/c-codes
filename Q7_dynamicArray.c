#include <stdio.h>
#include <stdlib.h>

int main() {
    int *arr = NULL;
    int capacity = 2;  // Initial capacity
    int size = 0;
    int input;

    arr = (int *)malloc(capacity * sizeof(int));
    if (arr == NULL) {
        printf("Memory allocation failed.\n");
        return 1;
    }

    printf("Enter numbers one by one (enter -1 to stop):\n");

    while (1) {
        scanf("%d", &input);
        if (input == -1)
            break;

        // Resize if needed
        if (size == capacity) {
            capacity *= 2;
            int *temp = realloc(arr, capacity * sizeof(int));
            if (temp == NULL) {
                printf("Memory reallocation failed.\n");
                free(arr);
                return 1;
            }
            arr = temp;
        }

        arr[size++] = input;
    }

    // Display the array
    printf("You entered %d elements:\n", size);
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    free(arr);  // Free allocated memory
    return 0;
}
