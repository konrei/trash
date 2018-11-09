#include <stdio.h>

int main(void)
{
    int n1, n2;
    char op;
    do
    {
        printf("Enter which operation you want to do(+, -, *, /) \n");
        op = getch();
    }
    while(op!='+' && op!='-' && op!='*' && op!='/');

    printf("\n");

    switch(op)
    {
    case '+':
        printf("You chose to do addition.\n\n");
        printf("Number 1: ");
        scanf("%i", &n1);
        printf("Number 2: ");
        scanf("%i", &n2);
        printf("\n");
        printf("%i + %i = %i\n", n1, n2, n1+n2);
        break;
    case '-':
        printf("You chose to do subtraction.\n\n");
        printf("Number 1: ");
        scanf("%i", &n1);
        printf("Number 2: ");
        scanf("%i", &n2);
        printf("\n");
        printf("%i - %i = %i\n", n1, n2, n1-n2);
        break;
    case '*':
        printf("You chose to do multiplication.\n\n");
        printf("Number 1: ");
        scanf("%i", &n1);
        printf("Number 2: ");
        scanf("%i", &n2);
        printf("\n");
        printf("%i * %i = %i\n", n1, n2, n1*n2);
        break;
    case '/':
        printf("You chose to do division.\n\n");
        float dn1, dn2;
        printf("Number 1: ");
        scanf("%f", &dn1);
        printf("Number 2: ");
        scanf("%f", &dn2);
        printf("\n");
        printf("%f / %f = %f\n", dn1, dn2, dn1/dn2);
        break;
    }

}
