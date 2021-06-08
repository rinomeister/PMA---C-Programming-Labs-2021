#include <stdio.h>
int dodajemojedan(int n);
int main()
{
    int n,rezultat;
    printf("Unesite neki broj: \n");
    scanf("%d",&n);
    while (1)
    {  
        if (n < 10000 || n > 99999)
        {
            printf("Unesite peteroznamenkasti broj: \n");
            scanf("%d",&n);
        }
        else
        {
            break;
        }
    }
    rezultat = dodajemojedan(n);
    return 0;
    //pozivamo funkciju koja ce mi povecati svaku znamenku za 1
}

int dodajemojedan(int n)
{
    int suma,temp1,temp2,temp3,temp4,temp5;
    temp1 = (n/10000) +1;
    n = n % 10000  ;
    temp2 = (n/1000) + 1;
    n = n % 1000  ;
    temp3 = (n/100) + 1;
    n = n % 100 ;
    temp4 = (n/10) + 1;
    n = n % 10 ;
    temp5 = (n/1) + 1;
    n = n % 1 ;
    printf(" %d %d %d %d %d", temp1, temp2, temp3, temp4, temp5);
}