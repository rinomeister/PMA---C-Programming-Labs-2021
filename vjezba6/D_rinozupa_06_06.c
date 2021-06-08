#include <stdio.h>
void ispisi_niz(int *neki_niz, int n)
{
    for (int i = 0; i<n; i++)
    {
        printf("%d", neki_niz[i]);
    }
}

int vrati_prosjecnu_vrijednost(int *neki_niz, int n)
{
    int suma = 0, rezultat = 0;

    for (int i = 0; i<n; i++)
    {
        suma += neki_niz[i];
    }
    rezultat = suma / n;

    return rezultat;
}

int unos_niza(int *niz, int n)
{
    printf("Unesite elemente niza\n");

    for (int i = 0; i<n; i++)
    {
        printf("%d element: ", i);
        scanf("%d", &niz[i]);
    }

    return niz;
}

int main()
{
    int n;
    printf("Unesite velicinu niza: \n");
    scanf("%d", &n);
    int niz[n], *neki_niz, neki_broj;
    neki_niz = unos_niza(niz, n);
    neki_broj = vrati_prosjecnu_vrijednost(neki_niz, n);
    printf("Prosjecna vrijednost niza je: %d", neki_broj);
    printf("\n");
    printf("Niz je: ");
    ispisi_niz(neki_niz, n);
    printf("\n");
    return 0;
}