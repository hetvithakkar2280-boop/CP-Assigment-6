#include <stdio.h>

int main() {
    int m[4][4], arr[16], i, j, temp;
    int *p = &m[0][0];      // pointer to the first element of the matrix

    printf("Enter 16 elements of the 4x4 matrix:\n");
    for (i = 0; i < 16; i++)
        scanf("%d", p + i);

    // copy matrix elements into the single-dimension array
    for (i = 0; i < 16; i++)
        *(arr + i) = *(p + i);

    // sort the 1D array in ascending order (bubble sort)
    for (i = 0; i < 15; i++) {
        for (j = 0; j < 15 - i; j++) {
            if (*(arr + j) > *(arr + j + 1)) {
                temp = *(arr + j);
                *(arr + j) = *(arr + j + 1);
                *(arr + j + 1) = temp;
            }
        }
    }

    printf("Sorted elements in 1D array: ");
    for (i = 0; i < 16; i++)
        printf("%d ", *(arr + i));
    printf("\n");
    return 0;
}
