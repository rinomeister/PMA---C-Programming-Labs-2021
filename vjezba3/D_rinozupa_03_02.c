#include <stdio.h>
int zbrajanje(int n);
int main()
{
    int n;
    int rezultat;
    printf("Unesite brojku!\n");
    scanf("%d", &n);
    rezultat=zbrajanje(n);
    printf("%d", rezultat);
    return 0;
}

int zbrajanje(int n)
{
    int suma=0;
    while(n>=10)
    {
        suma += n % 10;
        n /= 10;
    }
    return zbrajanje(n+suma);
}

