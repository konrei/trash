#include <stdio.h>
#include <stdlib.h>

int main(void) {
    FILE * html = fopen("index.html", "w");
    fprintf(html, "<html>\n<head>\n<title>I miss the web :(</title>\n</head>\n<body>\n<p>Guess they never miss huh, I bet samet is goin' for android development :c</p>\n</body>\n</html>");
    fclose(html);

    FILE * readmeFile = fopen("README.md", "w");
    fprintf(readmeFile, "This project is licensed under MIT License bla bla bla.\n\nI hate C.");
    fclose(readmeFile);

    FILE * thoughts = fopen("beynim.itsotvod", "a"); //append, icof
    fprintf(thoughts, "idk if anyone gonna look at this shit\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\nI have white hair strands btw :O");
    fclose(thoughts);

    char line[255];
    FILE * readin = fopen("beynim.itsotvod", "r");
   // fgets(line, 255, readin); // it basically says (*Where I'm going to put informations on?*, *How many characters u want to read*, *The pointer of that file*)
    for(int i=0; i<25; i++) {
        fgets(line, 255, readin);
    }
    printf("%s", line);
}
