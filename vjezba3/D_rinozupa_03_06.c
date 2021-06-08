#include <stdio.h>
int check(char c);
int main()
{
    char c;
    int rez;
    printf("Unesite neki znak!\n");
    scanf(" %c", &c);
 
    while (c != '.')
    {
        printf("Unesite character: \n");
        scanf(" %c", &c);
 
        if (c == '.')
        {
            printf("Unesena je tocka!\n");
 
        }
        else
        {
            switch (check(c))
            {
            case 1:
                printf("Malo slovo!\n");
                break;
            case 2:
                printf("Veliko slovo!\n");
                break;
            case 3:
                c = c - '0';//pretvaranje chara u int sa ascii vrijednosti
                rez = c*c;
                printf("%d\n", rez);
                printf("Znamenka je!\n");
                break;
            default:
                printf("Ni slovo ni znamenka!\n");
                break;
            }
        }
    }
       return 0;
}
 
int check(char c)
{
    if (c >= 'A' && c <= 'Z')
    {
        return 2;
    }
    else if (c >= 'a' && c <= 'z')
    {
        return 1;
    }
    else if (c >= '0' && c <= '9')
    {
        return 3;
    }
    else
    return 0;
}