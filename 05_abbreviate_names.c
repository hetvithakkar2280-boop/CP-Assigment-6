#include <stdio.h>
#include <string.h>

/* Abbreviates every name except the last one by its first letter.
   e.g. "Sachin Ramesh Tendulkar" -> "S. R. Tendulkar" */
int main() {
    char names[10][100];
    char *p, *last;
    int n, i, len;

    printf("How many names? ");
    scanf("%d", &n);
    getchar();               // consume the leftover newline

    for (i = 0; i < n; i++) {
        printf("Enter full name %d: ", i + 1);
        fgets(names[i], sizeof(names[i]), stdin);
        names[i][strcspn(names[i], "\n")] = '\0';
    }

    printf("\nAbbreviated names:\n");
    for (i = 0; i < n; i++) {
        len = strlen(names[i]);
        while (len > 0 && names[i][len - 1] == ' ')   // remove trailing spaces
            names[i][--len] = '\0';

        last = strrchr(names[i], ' ');                // last space before surname
        if (last == NULL) {
            printf("%s\n", names[i]);                 // only one word
            continue;
        }
        for (p = names[i]; p < last; p++) {
            if (*p != ' ' && (p == names[i] || *(p - 1) == ' '))
                printf("%c. ", *p);
        }
        printf("%s\n", last + 1);
    }
    return 0;
}
