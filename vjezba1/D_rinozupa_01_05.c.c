#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

int main()
{
    int a,b,br1,br2,max;

    printf("Unesite interval:\n");
    scanf("%d %d", &a, &b);

    br1= a+rand()%(b-a+1);
    br2= a+rand()%(b-a+1);

    if (br1 > br2)
    {
        max = br1;
        printf("Veci je broj %d\n", max);
    }
    else if (br1 == br2)
    {
        max = br2; //moze biti bilo koji
        printf("Moze biti bilo koji\n");
    }
    else if (br1 < br2)
    {
        max = br2;
        printf("Veci je broj %d\n", max);
    }

    printf("%d %d \n%d",br1, br2, max);

    return 0;
}
