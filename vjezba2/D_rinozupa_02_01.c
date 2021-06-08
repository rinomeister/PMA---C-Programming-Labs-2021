#include <stdio.h>
int main()
{
    char ime,prezime,najveceime,najveceprezime,najmanjeime,najmanjeprezime;
    printf("Unesite ime!\n");
    scanf("%c", &ime);
    printf("Unesite prezime!\n");
    scanf("%c", &prezime);
    najveceime=najmanjeime=ime;
    najveceprezime=najmanjeprezime=prezime;
    while(ime != '0' || prezime!='0')
    {
        //printf("Novi unos!\n");
        scanf("%c %c",&ime,&prezime);
        if(ime>najveceime)
        {
            najveceime=ime;
            najveceprezime=prezime;
        }
        if(prezime<najmanjeprezime)
        {
            najmanjeprezime=prezime;
            najmanjeime=ime;
        }
        
    }
    return 0;
}