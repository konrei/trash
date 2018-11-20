#include <stdio.h>
#include <stdlib.h>

const int scoreNumber = 3;

void chart(int score);

int main(void) {
    int scores[3];

    for (int i = 0; i < scoreNumber; i++) {
        printf("Score %i: ", (i + 1));
        scanf("%i", &scores[i]);
    }

    for (int i = 0; i < scoreNumber; i++) {
        printf("%i times: ", scores[i]);
        chart(scores[i]);
    }
}

void chart(int score) {
    for (int i = 0; i < score; i++) {
        printf("/");
    }

    printf("\n");
}
