#include <stdio.h>
#include <math.h>
int funkcija (int n);
int main() 
{
    int n,rezultat;
    printf("Unesite neki broj!\n");
    scanf("%d", &n);
    rezultat = funkcija(n);
    return 0;
}

int funkcija (int n)
{
    int k,final;
    printf("Upisite potenciju broja!\n");
    scanf("%d", &k);
    if (k >= 2 && k <= 16)
    {
        final = 3 * k*k + 1 * k;
        printf("Rjesenje je %d", final);

    }
    else
    {
        printf("Potencija broja nije u intervalu!\n");
    }
    return final;   
}

