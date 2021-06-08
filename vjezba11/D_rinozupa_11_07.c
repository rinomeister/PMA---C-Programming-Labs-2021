#include <stdio.h>
#include <stdlib.h>
void fibonacci();
void main()
{
    int n,i;
    printf("Unesite koliko puta zelite da se izvrsi!\n");
    scanf("%d",&n);
    for (i=0; i<n ; i++)
    {
        fibonacci();
    }
}
void fibonacci()
{
    static int a=0;
    static int b=1;
    static int c;
    if (a==0)
    {
        printf("%d\n%d",a,b);
    }
    c = a+b;
    a=b;
    b=c;
    printf("%d\n",c);
}
