#include <stdio.h>
#include <stdlib.h>
int palindrom(int n, int temp);
int main()
{
    int n;
    printf("Unesite neki broj!\n");
    scanf("%d",&n);
    int temp = palindrom(n,0);
    if (temp == n)
    {
        printf("Palindrom je\n");
    }
    else{
        printf("Nije palindrom\n");
    }
    return 0;
}
int palindrom (int n, int temp)
{
    
    if(n==0)
    {
        return temp;
    }
    else
    {
        temp = temp * 10 + n % 10;
        return palindrom (n/10,temp);

    }
    
}