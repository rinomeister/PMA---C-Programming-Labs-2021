#include <stdio.h>
#include <stdlib.h>
int rekurzija(int n);
int main()
{
    int n;
    printf("Unesite neki broj");
    scanf("%d",&n);
    int b;
    b = rekurzija(n);
    return 0;
}
int rekurzija(int n)
{
    if(n==1)
    {
        return n;
    }
    if (n % 2 != 0)
    {
        printf("%d\n",n);
    }
    return rekurzija(n-1);
}