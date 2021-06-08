#include <stdio.h>
int zbrajanje(unsigned n);
int main()
{
    unsigned n;
    int rezultat;
    printf("unesite brojku!\n");
    scanf("%u", &n);
    rezultat=zbrajanje(n);
    printf("%d", rezultat);
    return 0;
}

int zbrajanje(unsigned n)
{
    int brojac=0;
    while (n!=0)
    {
        n /= 10;
        brojac +=1;
    }
    return brojac;
}
