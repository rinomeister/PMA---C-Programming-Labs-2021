#include<stdio.h>
int setiranje (int n,int k);
void provjera(int n, int k);
int main()
{
    int n,k;
    printf("Unesite broj!\n");
    scanf("%d", &n);
    printf("Unesite bit koji se setira!\n");
    scanf("%d", &k);
    n=setiranje(n,k);
    provjera(n,k);
}

int setiranje(int n,int k)
{
    n = n | 1<<k;
    printf("%d\n", n);
    return n;
}

void provjera(int n,int k)
{
    
    n = n >> k;
    if (n & 1)
        printf("Bit je setiran");
    else
        printf("Bit nije setiran");
    
}
