#include <stdio.h>
#include <stdlib.h>

int main() {
    int a[5];
    int i;
    for (i = 0; i < 5; i++)
    {
        a[i] = 0;
    }

    for (i = 0; i < 5; a[i++] = 0);

    for (i = 0; i < 5; i++)
    {
        printf("%d ", a[i]);
    }

    return 0;
}
