#include <stdio.h>
#include <stdlib.h>

#define MAX_BLOCKS 10

int main() {
    void* memoryBlocks[MAX_BLOCKS] = {NULL};  // Stores pointers to allocated memory
    int choice, index, size;

    while (1) {
        printf("\n=== Memory Allocator Menu ===\n");
        printf("1. Allocate Memory\n");
        printf("2. Free Memory\n");
        printf("3. Show Allocated Blocks\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
        case 1:
            printf("Enter index (0-%d): ", MAX_BLOCKS - 1);
            scanf("%d", &index);
            if (index < 0 || index >= MAX_BLOCKS) {
                printf("Invalid index!\n");
                break;
            }
            if (memoryBlocks[index] != NULL) {
                printf("Memory already allocated at index %d.\n", index);
                break;
            }
            printf("Enter size in bytes to allocate: ");
            scanf("%d", &size);
            memoryBlocks[index] = malloc(size);
            if (memoryBlocks[index] == NULL) {
                printf("Memory allocation failed!\n");
            } else {
                printf("Memory allocated at index %d (%d bytes).\n", index, size);
            }
            break;

        case 2:
            printf("Enter index to free (0-%d): ", MAX_BLOCKS - 1);
            scanf("%d", &index);
            if (index < 0 || index >= MAX_BLOCKS || memoryBlocks[index] == NULL) {
                printf("Nothing to free at index %d.\n", index);
                break;
            }
            free(memoryBlocks[index]);
            memoryBlocks[index] = NULL;
            printf("Memory at index %d freed.\n", index);
            break;

        case 3:
            printf("\nAllocated memory blocks:\n");
            for (int i = 0; i < MAX_BLOCKS; i++) {
                if (memoryBlocks[i] != NULL) {
                    printf("Block %d: Allocated\n", i);
                } else {
                    printf("Block %d: Empty\n", i);
                }
            }
            break;

        case 4:
            // Free all memory before exiting
            for (int i = 0; i < MAX_BLOCKS; i++) {
                if (memoryBlocks[i] != NULL) {
                    free(memoryBlocks[i]);
                }
            }
            printf("Exiting. All memory freed.\n");
            return 0;

        default:
            printf("Invalid choice. Try again.\n");
        }
    }

    return 0;
}
