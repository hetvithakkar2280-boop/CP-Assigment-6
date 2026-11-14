#include <stdio.h>

int main() {
    int m[3][3], i, *p, largest, smallest;
    p = &m[0][0];           // pointer to the first element

    printf("Enter 9 elements of the 3x3 matrix:\n");
    for (i = 0; i < 9; i++)
        scanf("%d", p + i);

    largest = *p;
    smallest = *p;
    for (i = 1; i < 9; i++) {
        if (*(p + i) > largest)
            largest = *(p + i);
        if (*(p + i) < smallest)
            smallest = *(p + i);
    }

    printf("Largest  = %d\n", largest);
    printf("Smallest = %d\n", smallest);
    return 0;
}
