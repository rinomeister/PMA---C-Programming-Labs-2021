#include <stdio.h>

void nizBrojeva(int n)
{
    int rezultatparni=0; 
    int rezultatneparni=0;
    int temp = n;

    while (temp != 1)
    {
        if (temp % 2 == 0)
        {
            rezultatparni = temp / 2;
            temp = rezultatparni;
            printf("%d\n", temp);
        }
        else if (temp % 2 == 1)
        {
            rezultatneparni = (temp*3) +1;
            temp = rezultatneparni;
            printf("%d\n", temp);
        }
    }
}

int main()
{
    int n;
    printf("Unesite broj!\n");
    scanf("%d", &n);
    nizBrojeva(n);

    return 0;
}
