#include <stdio.h>
#include <stdlib.h>
char* datoteka(int velicina)
{
    FILE* fp;
    char* str = (char*)malloc(sizeof(char)* velicina);
    fp = fopen("dat2.txt", "r");
    if (fp == NULL)
    {
        printf("Datoteka se nemoze otvoriti!\n");
    }
    else
    {
        //EOF JE OZNAKA KRAJA DATOTEKE
        char c;
        int i = 0;
        while (1) //while true,infinite loop
        {
            c = fgetc(fp);
            if ( c == EOF)//greska //kraj
            {
                break;//onda zavrsi
            }
            if ( c >= 'a' && c <= 'z')
            {
                str[i] = c;

            }
            
            i++;
        }
        str[i]= '\0';
        for (int i = 0 ; i < 10; i++)
        {
            printf("%c",str[i]);
        }
    }
    fclose(fp);
    return str;

}

int main()
{
    int velicina = 200;
    char *rezultat = datoteka(velicina);
    puts(rezultat);
    return 0;
}
