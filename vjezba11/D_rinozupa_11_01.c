#include <stdio.h>
int binarni(int n)
{
    if (n == 0)
        return 0;
    else
        return (n % 2 + 10 * binarni(n / 2));
}
int main()
{
    int n = 7;
    printf("%d", binarni(n));
    return 0;
}