#include <stdio.h>
int setiraj(int  n, int k);
int main()
{
    int n, k;
    printf("Unesite broj!\n");
    scanf("%d", &n);
    printf("Unesite redni broj!\n");
    scanf("%d", &k);
    n=setiraj(n, k);
    printf("%d", n);
    return 0;
}

int setiraj(int n, int k)
{
    int i;
    for(i=(k-1)*8;i<(8*k);i++)
        n=n|(1<<i);
    return n;
}
