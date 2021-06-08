#include <stdio.h>
int funkcija(int a, int b);
int main()
{
    int a,b,rezultat;
    printf("Unesite neki broj\n");
    scanf("%d", &a);
    printf("Unesite neki broj\n");
    scanf("%d", &b);
    rezultat=funkcija(a,b);
    printf("%d", rezultat);
    return 0;
}
int funkcija(int a,int b)
{
    int result;
    result = a>=b?a-b:a+b;
    return result;
}
