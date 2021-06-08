#include <stdio.h>
#include <string.h>
int provjera(char *rijec,char znak);
int main()
{
    char rijec[100];
    char znak;
    int brojac=0;
    printf("Unesite neki string!\n");
    gets(rijec);
    printf("Unesite znak koji ce se pretrazivati!\n");
    znak = getchar();
    brojac = provjera(rijec,znak);
    printf("znak %c se pojavuljuje %d puta\n",znak,brojac);
    return 0;
}
int provjera(char *rijec,char znak)
{
    static int i=0;
    static int brojac=0;
    if(!rijec[i]) //ako ne postoji elemenata u stringu vraca odma brojac
    {
        return brojac;
    }

    else
    {
        if(rijec[i]==znak)//usporeduje znak rijeci s onim kojeg trazimo
        {
            brojac++;//ako je to taj znak povecavamo brojac
        }
        i++; //povecamo i da bi isli na iduci znak
        provjera(rijec,znak);//funkcija se rekurzivno ponavlja sve dok ne dode na null i tu se onda dolazi do prvo ifa koji vraca brojac
    }
}