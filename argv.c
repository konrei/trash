#include <stdio.h>
#include <string.h>
#include <ctype.h>

//#if 0
int main(int argc/*c means count*/, const char *argv/*v means vector(array)*/[]) {

    for (int i = 1; i < (argc); i++) {
        printf("Parameter %d: %s\n", i, argv[i]);
    }

    return 0;
}
//#endif

