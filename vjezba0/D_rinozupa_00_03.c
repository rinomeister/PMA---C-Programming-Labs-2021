#include <stdio.h>
int main(void)
{
    int a, b, c;
    printf("unesite dvije varijable!\n");
    scanf ("%d %d", &a, &b);
    c = a;
    a = b;
    b = c;
    printf("zamijenjena vrijednost od varijable a je %d\n", a);
    printf("zamijenjena vrijednost od varijable b je %d\n", b);
    return 0;
}
//a = 10 b = 5
//a = a + b , var a postaje 15
//b = a -b, var b postaje a 10
//a = a - b var a postaje b 5
