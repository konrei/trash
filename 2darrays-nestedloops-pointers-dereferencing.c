#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int hahaha[3][3] = { {1,2,3},{4,5,6},{7,8,9} };
    int age = 21;
    int *srank = &age;

    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            printf("Index %d of Array %d > %d\n",j,i,hahaha[i][j]);
            if (j == 2)
            {
                printf("\n");
            }
        }
    }

    printf("%p\n", &hahaha);
    printf("%p\n", srank); //memory address of the age variable
    printf("%d\n", *srank); //the value inside of that memory address. this equals to => *&age. while &age contains the memory address of itself, *&age contains the value inside of that memory address. this is called "dereferencing".

// srank == &*&*&*&*&*&*&*&*&*&*&*&*&*&*&*&*&*&*&*&*&*&*&*&*&*srank < this returns true, hopefully you get the idea

}

