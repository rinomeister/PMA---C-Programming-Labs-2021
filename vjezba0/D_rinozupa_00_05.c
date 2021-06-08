#include <stdio.h>
int main (void)
{
    int a, b , c;
    printf("unesi tri cijela broja!\n");
    scanf("%d %d %d", &a, &b, &c);
    if  (a>=b && a>=c)
        {if (b>=c)
            printf("%d %d %d", c, b , a);
        else
            printf("%d %d %d", b ,c ,a);

    }


     else if  (b>=a && b>=c)
        {if (a>=c)
            printf("%d %d %d", c, a , b);
        else
            printf("%d %d %d", a ,c ,b);

    }

     else if  (c>=a && c>=b)
        {if (b>=a)
            printf("%d %d %d", a, b , c);
        else
            printf("%d %d %d", b ,a ,c);

    }

    return 0;
}
