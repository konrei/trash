#include <stdio.h>

int main(void)
{
    double myArray[]= {};
    char op[1];
    int i = 0;

    do
    {
        printf("enter a number plzz ('q' to exit): ");
        op == getchar();
        scanf("%lf", myArray[i]);
        printf("%lf", myArray[i]);
//        if (myArray[i]=='q')
//        {
//            op == 'q';
//        } else {
//            i++;
//        }
    }
    while(op!='q');



}
