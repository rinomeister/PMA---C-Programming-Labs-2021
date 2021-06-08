#include <stdio.h>
int nep_par_vrijednosti(int broj)
{
    if (broj % 2 == 0)
    {
        int parni_broj;
        parni_broj = broj /2;
        return parni_broj;
    }
    else if (broj % 2 == 1)
    {
        int neparni_broj;
        neparni_broj = (3*broj)+1;
        return neparni_broj;
    }
}
 
int main()
{
    int broj;
    printf("Unesite neki broj: \n");
    scanf("%d", &broj);
 
    int rezultat = nep_par_vrijednosti(broj);
    printf("Rezultat je: %d", rezultat);
 
    return 0;
}