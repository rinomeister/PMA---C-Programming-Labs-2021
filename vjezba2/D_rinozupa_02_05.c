#include <stdio.h>
int main()
{
    int a,b,n,i,suma = 0;
    printf("Unesite donju granicu intervala!\n");
    scanf("%d", &a);
    printf("Unesite gornju granicu intervala!\n");
    scanf("%d", &b);
    printf("Unesite proizvoljni broj!\n");
    scanf("%d", &n);
    for (i = a; i <= b; i = i + n )
    {
        suma = suma + i;
    }
    printf("Ukupna suma je %d", suma);
    return 0;
    

}