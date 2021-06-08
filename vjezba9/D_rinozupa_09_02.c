#include <stdio.h>
#include <stdlib.h>
#define VOLUMEN(a,b,c) (a*b*c)
#define OPLOSJE(a,b,c) (2 * (a*b + a*c + b*c))
typedef struct
{
    int a,b,c;
}kvadar;

int main()
{
    kvadar kv;
    kv.a=2, kv.b=3, kv.c=4;
    //int finale1 = VOLUMEN(kv.a,kv.b,kv.c);
    //int finale2 = 
    printf("Volumen kvadra je %d\n,oplosje kvadra je %d\n", VOLUMEN(kv.a,kv.b,kv.c), OPLOSJE(kv.a,kv.b,kv.c));
    return 0;
}
