#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Shinobi/* 忍び */
{
    char Namae/* 名前-Name */[50];
    char Ketsuekigata/* 血液型-Blood Type */[4]; // If you make the size of this array as 3, there won't be any spaces left to the null character and it will overflow like > "AB+Male". So, be careful.
    char Seibetsu/* 性別-Gender*/[6];
    char Hoshi_uranai/* 星占い-Horoscope*/[10];
    int Nenrei/* 年齢-Age*/;
};

int main(void)
{
    struct Shinobi Uchiha_Itachi;
    strcpy(Uchiha_Itachi.Namae, "Uchiha Itachi");
    strcpy(Uchiha_Itachi.Ketsuekigata, "AB+");
    strcpy(Uchiha_Itachi.Seibetsu, "Male");
    strcpy(Uchiha_Itachi.Hoshi_uranai, "Gemini");
    Uchiha_Itachi.Nenrei = 21;


    printf("\nA new shinobi appears!\n\nShinobi Name: %s\n%s's blood type: %s\n%s's gender: %s\n%s's horoscope: %s\n%s's age: %d\n", Uchiha_Itachi.Namae, Uchiha_Itachi.Namae, Uchiha_Itachi.Ketsuekigata, Uchiha_Itachi.Namae, Uchiha_Itachi.Seibetsu, Uchiha_Itachi.Namae, Uchiha_Itachi.Hoshi_uranai, Uchiha_Itachi.Namae, Uchiha_Itachi.Nenrei);
}
