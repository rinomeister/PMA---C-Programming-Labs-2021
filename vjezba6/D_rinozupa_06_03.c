#include <stdio.h>
int prosjekniza(int niz[],int suma,int velicina);
void ispisniza(int niz[],int i,int velicina);
int main()
{
    int velicina,i,suma=0,rezultat;
    printf("Unesite koliko zelite imati vrijednosti u nizu!\n");
    scanf("%d", &velicina);
    int niz[velicina];
    for (i = 0; i < velicina; i++)
    {
        scanf("%d", &niz[i]);
        suma +=niz[i];//suma za zbrajanje svih vrijednosti u nizu,koristit cemo je za izracunat prosjek
    }
    ispisniza(niz,i,velicina);
    rezultat = prosjekniza(niz,suma,velicina);
    printf("Prosjek niza je %d",rezultat ); 
    return 0;
}
int prosjekniza(int niz[],int suma,int velicina)
{
    int prosjek;
    prosjek = suma / velicina;
    return prosjek;
}

void ispisniza(int niz[],int i,int velicina)
{
    for (i = 0; i < velicina; i++)
    {
        printf("Na poziciji %d je %d\n", i,niz[i]);
    }
}
