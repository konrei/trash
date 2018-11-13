#include <stdio.h>
#include <stdlib.h>

#define sizeofarray(x) (sizeof(x) / sizeof(int))

int main(void)
{
    int entryNumbers[] = {1,"Hi, David!",3.75487,5};
    size_t n = sizeofarray(entryNumbers);

    for (int i = 0; i < n; i++)
    {
        printf("Entry number %d > %d\n", (i+1), entryNumbers[i]);
    }
}
