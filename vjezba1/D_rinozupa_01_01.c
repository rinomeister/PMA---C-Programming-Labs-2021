#include <stdio.h>
int main()
{
    int a,b,rezultat;
    char znak;
    printf("unesi prvi broj!\n");
    scanf("%d", &a);
    printf("unesi drugi broj!\n");
    scanf("%d", &b);
    printf("unesi znak +,-,*,/!\n");
    scanf(" %c", &znak);

    if (znak == '/')
    {
        if (b == 0)
        {
            printf("zabranjeno je dijeliti s nulom!\n");
        }

        else if (a%b!=0)
        {
            rezultat = a/b;
            printf("rezultat je %d\n",rezultat);
            printf("ostatak je %d\n", a-(rezultat*b));
        }
        else
        {
            rezultat = a/b;
            printf("rezultat je %d\n", rezultat);
        }
    }
    else if (znak == '+')
    {
        rezultat = a+b;
        printf("rezultat je %d\n", rezultat);
    }
    else if (znak == '-')
    {
        rezultat = a-b;
        printf("rezultat je %d\n", rezultat);
    }
    else if (znak == '*')
    {
        rezultat = a*b;
        printf("rezultat je &d\n", rezultat);
    }
    else
        printf("nije unesen valjani znak!");
    return 0;
}
