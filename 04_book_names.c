#include <stdio.h>
#include <string.h>

int main() {
    char buffer[3][100];     // storage for the three names
    char *books[3];          // array of pointers to the names
    int i;

    for (i = 0; i < 3; i++) {
        books[i] = buffer[i];
        printf("Enter name of book %d: ", i + 1);
        fgets(books[i], 100, stdin);
        books[i][strcspn(books[i], "\n")] = '\0';
    }

    printf("\nThe books are:\n");
    for (i = 0; i < 3; i++)
        printf("%d. %s\n", i + 1, books[i]);
    return 0;
}
