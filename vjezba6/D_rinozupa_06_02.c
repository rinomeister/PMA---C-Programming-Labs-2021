#include <stdio.h>
int sumabrojeva(int niz[],int velicina, int i);
int produktbrojeva(int niz[],int velicina, int i);
int main()
{
    int velicina,i;
    printf("Unesite koliko zelite imati vrijednosti u nizu!\n");
    scanf("%d", &velicina);
    int niz[velicina];
    for ( i = 0; i < velicina; i++)
    {
         scanf("%d", &niz[i]);
    }
    printf("Suma je %d\n", sumabrojeva(niz,velicina,i));
    printf("Produkt je %d\n", produktbrojeva(niz,velicina,i));
}
int sumabrojeva(int niz[],int velicina, int i)
{
    int suma=0;
    for ( i = 0; i < velicina; i++)
    {
        suma += niz[i];
    }
    return suma;
}

int produktbrojeva(int niz[],int velicina, int i)
{
    int produkt=1;//dobivao sam krivi rezultat dok ga nisam inicijalizirao na 1
     for ( i = 0; i < velicina; i++)
    {
        produkt *= niz[i];
    }
    return produkt;
}