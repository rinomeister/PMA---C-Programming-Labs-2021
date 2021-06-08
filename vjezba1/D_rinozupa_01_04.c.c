#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,c,d;

    printf("Unesite granice prvog intervala: \n");
    scanf("%d %d", &a, &b);

    printf("Unesite granice drugog intervala: \n");
    scanf("%d %d", &c, &d);

    if (a>d && b<c)
    {
        printf("Presjek je interval: [%d %d]", a,c);
    }
    else if(a<d && b<c)
    {
        printf("Nema presjeka");
    }
    else if(a<c && b<d)
    {
        printf("Nema presjeka");
    }
    else if (a>c && b<d)
    {
        printf("Presjek je [%d %d]",b,c);
    }
    else if (a>c && b>d)
    {
        printf("Presjek je [%d %d]",a,b);
    }
    else
        printf("Nema presjeka!");

    return 0;
}

