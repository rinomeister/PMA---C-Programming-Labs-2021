#include <stdio.h>
int sumaneparnih(int niz[],int velicina,int i);
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
    printf("Suma elemenata na neparnim mjestima u nizu je %d", sumaneparnih(niz,velicina,i));
}
int sumaneparnih(int niz[],int velicina,int i)
{
    int suma = 0;
    for ( i = 0; i < velicina; i+=2) //i+=2 da prolazi na neparna mjesta u nizu
    {
        suma += niz[i];
    }
    return suma;
}