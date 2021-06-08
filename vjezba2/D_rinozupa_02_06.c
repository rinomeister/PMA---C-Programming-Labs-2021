#include <stdio.h>
int main()
{
    int m,n,i,j;
    printf("Unesite prvu vrijednost mreze!\n");
    scanf("%d", &m);
    printf("Unesite drugu vrijednost mreze!\n");
    scanf("%d", &n);
    for (i=0;i<n;i++)
    {
        for (j=0;j<m;j++)
        {
            if(i % 2 != 0)
            {
                if(j==0 || j == m-1)
                {
                    printf(" ");
                }
                else
                printf("* ");
            }
            else
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}