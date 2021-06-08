#include <stdio.h>
#include <stdlib.h>
#include <math.h>

struct Student
{
    char ime[25];
    char prezime [25];
    int JMBAG;
    char grupa;
    int prosjekbodova;
};

char Provjera(struct Student stu1, struct Student stu2, struct Student stu3)
{
    char prosli[50];
    int i;
    if (stu1.prosjekbodova >= 40)
    {
        for ( i = 0; i < 50; i++)
        {
            prosli[i] = stu1.ime;
            i++;
            prosli[i] = stu1.prezime;
        }
    }
    if (stu2.prosjekbodova >= 40)
    {
        for ( i = 0; i < 50; i++)
        {
            prosli[i] = stu2.ime;
            i++;
            prosli[i] = stu2.prezime;
        }
    }
    if (stu3.prosjekbodova >= 40)
    {
        for ( i = 0; i < 50; i++)
        {
            prosli[i] = stu3.ime;
            i++;
            prosli[i] = stu1.prezime;
        }
    }
    for (int i = 0; i < 50; i++)
    {
        printf("%s", prosli[i]);
    }
}

int main()
{
    struct Student stu1 = {"Ivan","Horvat",47940,'A',40};
    struct Student stu2 = {"Luka","Vucak",62370,'C',30};
    struct Student stu3 = {"Ana","Banana",83760,'A',90};
    puts(Provjera(stu1,stu2,stu3));
}