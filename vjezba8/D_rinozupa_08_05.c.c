#include <stdio.h>
#include <string.h>
char* spajanje(char* a, char* b, char* c, int duljinaprvog, int duljinadrugog, int duljinatreceg);
int main()
{
    char a[100], b[100], c[100];
    int duljinaprvog, duljinadrugog, duljinatreceg;
    printf("Unesite string!\n");
    gets(a);
    printf("Unesite string!\n");
    gets(b);
    printf("Unesite string!\n");
    gets(c);
    duljinaprvog = strlen(a);
    duljinadrugog = strlen(b);
    duljinatreceg = strlen(c);
    char *rezultat = spajanje(a, b, c, duljinaprvog, duljinadrugog, duljinatreceg);
    printf("%s", rezultat);
    return 0;
}
char* spajanje(char* a, char* b, char* c, int duljinaprvog, int duljinadrugog, int duljinatreceg)
{
    char dulji, istodulji;
    //char finale[200];
    if (duljinaprvog < duljinadrugog && duljinaprvog < duljinatreceg)
    {
        strcat(c, b);
        return a;
    }
    else if (duljinadrugog < duljinaprvog && duljinadrugog < duljinatreceg)
    {
        strcat(a, c);
        return a;
    }
    else if (duljinatreceg < duljinaprvog && duljinatreceg < duljinadrugog)
    {
        strcat(a, b);
        return a;
    }
}