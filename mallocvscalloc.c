#include <stdio.h>
#include <stdlib.h>

int main() {
    int *a, *b;
    int n = 5, i;

    // malloc
    a = (int*) malloc(n * sizeof(int));
    printf("malloc values:\n");
    for(i = 0; i < n; i++) {
        printf("%d ", a[i]);   // contains garbage values
    }

    // calloc
    b = (int*) calloc(n, sizeof(int));
    printf("\n\ncalloc values:\n");
    for(i = 0; i < n; i++) {
        printf("%d ", b[i]);   // contains all zeros
    }

    // Free memory
    free(a);
    free(b);

    return 0;
}
