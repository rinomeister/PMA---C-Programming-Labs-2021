#include <stdio.h>
int datoteka()
{
    FILE* fp;
    fp = fopen("dat.txt","r");
    if(fp == NULL)
    {
        printf("Nemogu otvoriti datoteku!\n");
        return 3;
    }
    else
    {
        printf("Datoteka je otvorena!\n");
    }
    int velicina = 0;
    fseek(fp,0,SEEK_END);
    velicina = ftell(fp);//uzima velicinu pointera i vraca velicinu
    fclose(fp);
    printf("Velicina datoteke je %d\n",velicina);
}

int main()
{
    datoteka();
    return 0;
}