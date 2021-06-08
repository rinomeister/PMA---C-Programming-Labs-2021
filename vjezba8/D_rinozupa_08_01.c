#include <stdio.h>
#include <string.h>
int anagrami(char *prvarijec, char *drugarijec,int velicinaprve, int velicinadruge);
int main()
{
    char prvarijec[100];
    char drugarijec[100];
    int velicinaprve,velicinadruge;
    int provjera;
    printf("Unesite prvu rijec!\n");
    gets(prvarijec);
    printf("Unesite drugu rijec!\n");
    gets(drugarijec);
    velicinaprve=strlen(prvarijec);
    velicinadruge=strlen(drugarijec);
    provjera = anagrami(prvarijec,drugarijec,velicinaprve,velicinadruge);
    if (provjera == 1)
    {
        printf("Anagrami su!\n");
    }
    else
    {
        printf("Nisu anagrami!\n");
    }
    return 0;
}

int anagrami(char *prvarijec, char *drugarijec,int velicinaprve, int velicinadruge)
{
    int sortiraniprvi[30]={0};
    int sortiranidrugi[30]={0}, i = 0;
    
    if (velicinaprve == velicinadruge)
    {
        while(prvarijec[i] != '\0')
        {
            sortiraniprvi[prvarijec[i]-'a']++;
            i++;
        }
        i = 0;
        while(drugarijec[i] != '\0')
        {
            sortiranidrugi[drugarijec[i]-'a']++;
            i++;
        }
        for (i = 0 ; i < 30; i++)
        {
            if (sortiraniprvi[i] != sortiranidrugi[i])
            {
                return 0;
            }
            else
            {
                return 1;
            }
        }
        
    }
    else
    {
        printf("Rijeci nemogu biti anagrami jer su razlicite duljine\n");
    }
}
