#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define MAX 256

#if 0
int main(void) {
    char text[100];

    printf("String > "); scanf("%s", &text);

    for (int i = 0, n = strlen(text); i < n; i++)
    {
        int c = text[i]; // ascii > a-z = 97-122, A-Z = 65-90 in english latin alphabet
        printf("%c: %d\n", text[i], c);
    }

    int n = 0;

    while(text[n] != '\0') {
        n++;
    }

    printf("Length of your string > %d", n);
}
#endif

#if 0
int main(void) {

    char str[MAX];

    printf("Input: ");
    //gets(str);
    fgets(str, MAX, stdin);

    if(str[0] >= 'a' && str[0] <= 'z')
    {
        str[0] -= ('a' - 'A'); //Capitalizing only the first letter of the word
    }

    printf("Output: %s", str);

//    for (int i = 0, n = strlen(str); i < n; i++)
//    {
//        //This code is capitalizing the whole word
//        if(str[i] >= 'a' && str[i] <= 'z') {
//            printf("%c", str[i] - ('a' - 'A'));
//        } else {
//            printf("%c", str[i]);
//        }
//
//    }
}
#endif

int main(void) {
    char string[MAX];

    printf("String: ");
    fgets(string, MAX, stdin);

    for (int i = 0, n = strlen(string); i < n; i++) {
#if 0
        if(islower(string[i])) {
            printf("%c", toupper(string[i]));
        } else {
            printf("%c", string[i]);
        }
#endif
        printf("%c", toupper(string[i]));
    }

}
