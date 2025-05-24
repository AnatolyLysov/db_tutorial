#include <stdio.h>
#include <stdlib.h>
#define CNT 5
#define CELOE int

int main() {
    CELOE i = CNT;
    printf("%d\n", i);
    return 0;
}




/* int main() {
    // Allocate memory for an integer
    int *ptr = (int *)malloc(sizeof(int));
    if (ptr == NULL) {
        fprintf(stderr, "Memory allocation failed\n");
        return 1;
    }

    // Assign a value to the allocated memory
    *ptr = 42;

    // Print the value
    printf("Value: %d\n", *ptr);

    // Free the allocated memory
    free(ptr);
    
    return 0;
} */