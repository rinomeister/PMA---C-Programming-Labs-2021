#include <stdio.h>
int main()
{
    int a,b,m,n,i;
    printf("Unesite donju granicu intervala!\n");
    scanf("%d", &a);
    printf("Unesite gornju granicu intervala!\n");
    scanf("%d", &b);
    printf("Unesite prvi cijeli broj!\n");
    scanf("%d", &m);
    printf("Unesite drugi cijeli broj!\n");
    scanf("%d", &n);
    
    for (i = a; i <= b; i = i +1 )
    {
        if (i % m == 0 && i % n == 0)
        {
            printf("%d FizzBuzz\n", i);
        }
        else if (i % m == 0)
        {
            printf("%d Fizz\n", i);
        }
        else if (i % n == 0)
        {
            printf("%d Buzz\n", i);
        }  
        
    }
    return 0;
}