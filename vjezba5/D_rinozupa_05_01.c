#include <stdio.h>
int najmanjibroj (int a, int b, int c);
int main()
{
    int a,b,c,rezultat;
    printf("unesite neki broj!\n");
    scanf("%d", &a);
    printf("unesite neki broj!\n");
    scanf("%d", &b);
    printf("unesite neki broj!\n");
    scanf("%d", &c);
    rezultat = najmanjibroj(a,b,c);
    printf("Najmanji broj je %d", rezultat);
    return 0;
}

int najmanjibroj (int a, int b, int c)
{
    int temp,result;
    temp=((a<b)? a:b);//filtriranje prva dva broja,ako je expression1 true,expression dva ce mi u temp spremit a,u suprotnom spremit ce b
    result=c<temp?c:temp;//usporedba preostala dva broja,ako je prvi expression istin,najmanji broj je c,u suprotnom je temp najmanji broj
    return result;
}


