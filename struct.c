#include <stdio.h>

struct 忍び/* Shinobi */
{
    char 名前/* Namae */[50];
    char 血液型/* Ketsuekigata */[3];
    char 性別/* Seibetsu */[10];
    char 星占い/* Hoshi uranai*/[10];
    int 年齢/* Nenrei */;
};

int main(void)
{
    struct 忍び Uchiha_Itachi;
    Uchiha_Itachi.年齢 = 21;
    printf("the age of itachi > %d", Uchiha_Itachi.年齢);
}
