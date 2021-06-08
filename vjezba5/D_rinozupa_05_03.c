#include<stdio.h>
void binarni (int n)
{
    
    while (n > 0)
    {
        if(n % 2 == 0)
        {
            printf("0\n");
            n/=2;
        }
        else if (n % 2 == 1)
        {
            printf("1\n");
            n/=2;
        }
        
    }
}

int main()
{
    int n;
    printf("unesite broj!\n");
    scanf("%d", &n);
    binarni(n);
}