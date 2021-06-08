#include <stdio.h>
int main()
{
    unsigned n,m;
    int brojac = 0;
    printf("Unesite broj!\n");
    scanf("%u", &n);
    m =n;
    while (n!=0)
    {
        n /= 10;
        brojac +=1;
    }
    printf("%u ima %d znamenki!\n", m, brojac);
    return 0;
}