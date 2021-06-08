#include <stdio.h>
int provjeragodine (int god);
int provjeraunosa (int dan, int mje, int god);//svi nacini provjeravanja unosa koje sam radio su bili prelosi i bio je nakrcan kod pa sam samo odlucio uvesti novu funk nadam se da je to okej :D
int main()
{
    int dan,mje,god,n,i;
    printf("unesite broj osoba\n");
    scanf("%d", &n);
    for (i = 0;i<n;i++)
    {
        printf("Unesite dan!\n");
        scanf("%d", &dan);
        printf("Unesite mjesec!\n");
        scanf("%d", &mje);
        printf("Unesite godinu!\n");
        scanf("%d", &god);
        if (provjeraunosa(dan,mje,god) == 1)
        {
            if (provjeragodine(god) == 1)
            {
                printf("Validan - Prijestupna!\n");
            }
            else if (provjeragodine(god) == -1)
            {
                printf("Nije validan!\n");
            }
            else
            {
                printf("Validan - Nije prijestupna!\n");
            }
        }
        else
        printf("Nije validan!\n");
    }
    return 0;
}
 
int provjeragodine(int god)
{
    if(god%4==0 && god%100!=0 || god%400==0)
    {
        return 1;
    }
    else
    return 0;
}
 
int provjeraunosa (int dan, int mje, int god)
{
    if (dan > 28 && mje == 2 || dan > 31 && mje == 1 || mje > 2)
    {
        return -1;
    }
 
    if (dan > 0 && dan < 32 && mje > 0 && mje <= 12 && god > 1900 && god < 2021)
    {
        return 1;
    }
    else
    return 0;
}
 
