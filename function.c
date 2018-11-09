#include <stdio.h>

int main(void)
{
    int n, n0;

    printf("First number for comparison: ");
    scanf("%d", &n);
    printf("Second: ");
    scanf("%d", &n0);
    max(n, n0);
}

void max(int n1, int n2)
{
    if (n1>n2)
    {
        printf("%d is bigger than %d", n1, n2);
    }
    else if (n2<n1)
    {
        printf("%d is bigger than %d", n2, n1);
    }
    else
    {
        printf("%d and %d is equal", n1, n2);
    }
}
