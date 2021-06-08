#include <stdio.h>
#include <stdlib.h>
int *mnozenjeniza(int *niz, int velicina, int a);
int main()
{
    int velicina;
    int a;
    int i;
    int rezultat;
    printf("Unesite broj s kojim zelite mnoziti niz\n");
    scanf("%d", &a);
    printf("Unesite koliko clanova zelite imati u nizu!\n");
    scanf("%d", &velicina);
    int niz[velicina];
    for(i = 0 ; i < velicina ; i++)
    {
        printf("Unesite element niza!\n");
        scanf("%d", &niz[i]);
    }
    rezultat = *mnozenjeniza(niz,velicina,a);
}

int *mnozenjeniza(int *niz, int velicina, int a)
{
    int *noviniz = (int *)malloc(velicina * sizeof(int));
    int i;
    int temp;
    for(i = 0 ; i < velicina ; i++)
    {
        temp = a * niz[i];
        noviniz[i]=temp;
        printf("%d\n", noviniz[i]);
    }
    return noviniz;
}
